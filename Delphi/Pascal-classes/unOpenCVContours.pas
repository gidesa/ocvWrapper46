{ This unit contains classes and methods to manage contours in OpenCV.


   Copyright (C) 2023 Giandomenico De Sanctis gidesay@yahoo.com

  This source is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free
  Software Foundation; either version 2 of the License, or (at your option)
  any later version.

  This code is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.

  A copy of the GNU General Public License is available on the World Wide Web
  at <http://www.gnu.org/copyleft/gpl.html>. You can also obtain it by writing
  to the Free Software Foundation, Inc., 51 Franklin Street - Fifth Floor,
  Boston, MA 02110-1335, USA.
}
unit unOpenCVContours;
{$ifdef FPC}
   {$MODE Delphi}
{$endif}

interface

uses
  {$ifdef MSWINDOWS}
  Windows,
  {$endif}
  {$ifdef LCL}
     {$ifdef UNIX}
     LCLType,
     {$endif}
  {$endif}
  SysUtils,  Classes, Graphics,
  unOCVImage, OPENCVWrapper;
type
  //** This class is a specialized version of TOCVParamMat, augmented with
  //** specific methods to process contours. Note that in Opencv contours are
  //** stored as normal Mat objects.
  TOCVContour = class(TOcvParamMat)
  public
     //** Calculate area of  contour
     function getContourArea(): Double;
     //** Calculate length (perimeter) of  contour
     function getContourLength(): Double;
     //** Get the vertex at input index of the  contour
     function getContourVertex( const ind: Integer): TPoint;
     //** Approximate a complex contour with a polygon having less vertexes and sides
     function approxPolygon(epsilon: Double = 7; closed: Boolean = True): TOCVContour;
     //** Calculate moments for contour
     function getMoments(): CvMomentsS;
  end;

  //** This class encapsulate extraction of contours from a gray-level image (1 channel)
  TOCVContoursFinder = class
  private
    vecContours: PCvvector_Mat;
    hierarchy:   TOcvParamMat;
    numCont: Integer;
    lastKey: Integer;
    intContStatus: Integer;
    currentIntKey: Integer;
  public
     constructor Create;
     destructor Destroy; override;
     //** Extract all contours from image, and store in memory
     function extractContours(const img: TOCVImage): Integer;
     //** Reset data for get contours
     procedure resetGet;
     //** Reset data for get internal contours (holes)
     procedure resetGetInternal;
     //** Get the next contour from internal array
     function getNextContour(out ctKey: Integer): TOCVContour;
     //** Get the next contour (hole) inside the parent contour having index parentKey
     function getNextInternalContour(const parentKey: Integer; out intCtKey: Integer): TOCVContour;
     //** Draw the contour having index ctKey. If ctKey = -1, then draw all contours
     procedure drawContour(const img: TOCVImage; const ctKey: Integer; const color: TColor = clRed; const thickness: Integer = 4);
  end;
{*****************************************************************************************************************}
implementation
{******************************************************************************}
{******************** TOCVContour *********************************************}
{******************************************************************************}

{$REGION 'TOCVContour'}

function TOCVContour.getContourArea(): Double;
begin
  Result:= pCvcontourArea(self.PCvMatPtr);
end;

function TOCVContour.getContourLength(): Double;
begin
  Result:= pCvarcLength(self.PCvMatPtr, True);
end;

function TOCVContour.getContourVertex(const ind: Integer): TPoint;
begin
  //  contour Mat has: N rows, one for every vertex; 1 column; 2 channels: 0 for X and 1 for Y; integer type
    if (ind<0) then
    begin
      raise Exception.Create('getContourVertex: ind < 0 ');
    end;
    Result.X:=self.atInt[ind,0,0];
    Result.Y:=self.atInt[ind,0,1];
end;

function TOCVContour.approxPolygon(epsilon: Double; closed: Boolean): TOCVContour;
begin
    Result:=nil;
    Result:=TOCVContour.CreateEmpty;
    pCvapproxPolyDP(self.PCvMatPtr, Result.PCvMatPtr, epsilon, closed);
end;


function TOCVContour.getMoments():CvMomentsS;
var
  m:  PCvMoments_t;
  ms: CvMomentsS;
begin
  m:=pCvmoments(self.PCvMatPtr);
  pCvMomentsToStruct(m, @ms);
  pCvMomentsDelete(m);
  result:=ms;
end;


{$ENDREGION}
{******************************************************************************}
{******************** TOCVContoursFinder **************************************}
{******************************************************************************}
{$REGION 'TOCVContoursFinder'}
const
      CONT_NEXT        = 0;
      CONT_PREVIOUS    = 1;
      CONT_FIRST_CHILD = 2;
      CONT_PARENT      = 3;

constructor TOCVContoursFinder.Create;
begin
  inherited Create;
  vecContours:=nil;
  hierarchy:=nil;
  lastKey:=-1;
  currentIntKey:=-1;
  numCont:=0;
  intContStatus:=0;
end;

destructor TOCVContoursFinder.Destroy;
begin
  if vecContours<>nil then
    pCvVectorMatDelete(vecContours);
  if hierarchy<>nil then
    hierarchy.Free;
  inherited Destroy;
end;

function TOCVContoursFinder.extractContours(const img: TOCVImage): Integer;
begin
  Result:=0;
  Assert(Assigned(img),'extractContours: input image not assigned');
  if (img.NChannels>1) then
  begin
    raise Exception.Create('extractContours: the input image must have only 1 channel');
  end;

  if vecContours<>nil then
    pCvVectorMatDelete(vecContours);
  if hierarchy<>nil then
    hierarchy.Free;
  vecContours:=pCvVectorMatCreate(0);
  hierarchy:=TOcvParamMat.CreateEmpty;
  // Also internal contours are extracted with RETR_TREE.
  // The output is a vector of Mat, with 1 contour in every element, and a
  // hierarchy Mat that has: 1 row, <nr of contours> columns, 4 channels, integer type.
  // The four channels contain (from 0 to 3): next contour index on same level; previous contour
  // index from same level; first child index; parent index. A channel contains -1 when it's
  // invalid (no valid next or previous contour, no child, or no parent).
  pCvfindContours(img.PCvMatPtr, vecContours, hierarchy.PCvMatPtr, Ord(TCvRetrievalModes.RETR_TREE),
        Ord(TCvContourApproximationModes.CHAIN_APPROX_SIMPLE) );
  // if numCont = 0 then no contours were found in image
  numCont:=pCvVectorMatLength(vecContours);
  resetGet;
  Result:=numCont;
end;


procedure TOCVContoursFinder.resetGet;
begin
  lastKey:=-1;
  currentIntKey:=-1;
  intContStatus:=0;
end;

procedure TOCVContoursFinder.resetGetInternal;
begin
  intContStatus:=0;
end;


function TOCVContoursFinder.getNextContour(out ctKey: Integer): TOCVContour;
var
  i: Integer;
begin
  Result:=nil;
  ctKey:=lastKey;
  i:=lastKey + 1;
  if i<numCont then
  begin
      Result:=TOCVContour.Create(pCvVectorMatGet(vecContours, i));
      lastKey:=i;
      ctKey:=lastKey;
  end;
end;

function TOCVContoursFinder.getNextInternalContour(const parentKey: Integer; out intCtKey: Integer): TOCVContour;
var
  nextCont: Integer;
begin
  Result:=nil;
  intCtKey:=currentIntKey;
  case intContStatus of
  0: begin
      nextCont := hierarchy.atInt[0, parentKey, CONT_FIRST_CHILD];
      intContStatus:=1;
  end;
  1: begin
      nextCont := hierarchy.atInt[0, currentIntKey, CONT_NEXT];
  end;
  end;
  if nextCont<>-1 then
  begin
      Result:=TOCVContour.Create(pCvVectorMatGet(vecContours, nextCont));
      currentIntKey:=nextCont;
      intCtKey:=currentIntKey;
  end;
end;


procedure TOCVContoursFinder.drawContour(const img: TOCVImage; const ctKey: Integer; const color: TColor; const thickness: Integer);
var
  cvcolor: PCvScalar_t;
begin
   Assert(Assigned(img),'extractContours: input image not assigned');
   {$ifdef LCL}
     cvcolor:=CvScalar_(Blue(color), Green(color), Red(color),  0);
   {$else}
     cvcolor:=CvScalar_(GetBValue(color), GetGValue(color), GetRValue(color),  0);
   {$endif}
   pCvdrawContours(img.PCvMatPtr, vecContours, ctKey, cvcolor, thickness, CV_AA, hierarchy.PCvMatPtr, 1);
   pCvScalarDelete(cvcolor);
end;

{$ENDREGION}

end.
