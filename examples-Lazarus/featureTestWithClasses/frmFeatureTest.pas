{ Test for Opencv ORB feature detector class with ocvWrapper.
  Use the Delphi classes for Mat, vectors, Ptrs.

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
unit frmFeatureTest;

{$MODE Delphi}

interface

uses
  SysUtils, Classes, Forms, StdCtrls, Dialogs,
  OPENCVWrapper, unOCVImage, unOCVVectors, unOCVPtrs;


type
  TForm6 = class(TForm)
    btnStart: TButton;
    lbl1: TLabel;
    txImg1: TEdit;
    btnLoad1: TButton;
    lbl2: TLabel;
    txImg2: TEdit;
    btnLoad2: TButton;
    dlgOpen1: TOpenDialog;
    procedure btnStartClick(Sender: TObject);
    procedure btnLoad1Click(Sender: TObject);
    procedure btnLoad2Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form6: TForm6;

implementation

{$R *.lfm}

uses Contnrs;
type
 TPair = class
 public
   ind: Integer;
   dist: single;
 end;

function compAsc(i1, i2: pointer): integer;
begin
  result := 0;
  if TPair(i1).dist < TPair(i2).dist  then result := -1
  else
      if TPair(i1).dist > tpair(i2).dist then result := 1;
end;



procedure TForm6.btnLoad1Click(Sender: TObject);
begin
  if dlgOpen1.Execute() then
  begin
    txImg1.Text:=dlgOpen1.FileName;
  end;
end;

procedure TForm6.btnLoad2Click(Sender: TObject);
begin
  if dlgOpen1.Execute() then
  begin
    txImg2.Text:=dlgOpen1.FileName;
  end;
end;

procedure TForm6.btnStartClick(Sender: TObject);

 var
  cvstr: CvString_t;

  img1, img2: TOcvImage;
  outimg:     TOcvImage;
  detectors1: TOcvParamMat;
  detectors2: TOcvParamMat;

  matches:      TCvPasvector_DMatch;
  firstmatches: TCvPasvector_DMatch;

  lstmatches: TObjectList;
  pr: TPair;
  dmat: PCvDMatch_t;
  match_results: Integer;
  d: Single;

  ptrorb: TCvPasPtr_ORB;

  vecKeypoint1: TCvPasvector_KeyPoint;
  vecKeypoint2: TCvPasvector_KeyPoint;

  i, l: Integer;
  bfmatcher: PCvBFMatcher_t;
  colMatch: PCvScalar_t;
  colPoint: PCvScalar_t;

  BEST_MATCHES_PERC: Single;

 begin

 try
   ptrorb:=nil;
   if (txImg1.Text = '') or (txImg2.Text = '') then
   begin
     ShowMessage('Select 2 images');
     Exit;
   end;
   img1:=TOCVImage.Create(txImg1.Text);
   img2:=TOCVImage.Create(txImg2.Text);

   BEST_MATCHES_PERC:=0.3;

   ptrorb:=TCvPasPtr_ORB.Create( pCvORB_create() );


   detectors1:=TOcvParamMat.CreateEmpty;
   vecKeypoint1:=TCvPasvector_KeyPoint.Create(0);
   pCvORBdetectAndCompute(ptrorb.pCvClassObj, img1.PCvMatPtr, pCvDefaultMat, vecKeypoint1.pCvVector, detectors1.PCvMatPtr);

   detectors2:=TOcvParamMat.CreateEmpty;
   vecKeypoint2:=TCvPasvector_KeyPoint.Create(0);
   pCvORBdetectAndCompute(ptrorb.pCvClassObj, img2.PCvMatPtr, pCvDefaultMat, vecKeypoint2.pCvVector, detectors2.PCvMatPtr);

   bfmatcher:=pCvBFMatcherCreate(Ord(TCvNormTypes.NORM_HAMMING),True);
   matches:=TCvPasvector_DMatch.Create(0);
   if (detectors1.width=0) then
   begin
      ShowMessage('No features found in image 1');
      Exit;
   end;
   if (detectors2.width=0) then
   begin
      ShowMessage('No features found in image 2');
      Exit;
   end;
   pCvBFMatchermatch(bfmatcher, detectors1.PCvMatPtr, detectors2.PCvMatPtr, matches.pCvVector);

   lstmatches:=TObjectList.Create;
   l:=matches.length;
   for i:=0 to l-1 do
   begin
     dmat:=matches.item[i];
     d:=pCvDMatchGet_distance(dmat);

     pr:=TPair.Create;
     pr.ind := i;
     pr.dist := d;
     lstmatches.Add(pr);
     pCvDMatchDelete(dmat);
   end;

   lstmatches.Sort(compAsc);
   match_results := Round(l*BEST_MATCHES_PERC);
   firstmatches:=TCvPasvector_DMatch.Create(match_results);
   for i:=0 to match_results-1 do
   begin
     pr:=lstmatches.Items[i] as TPair;
     dmat:=matches.item[pr.ind];
     firstmatches.item[i]:=dmat;
     pCvDMatchDelete(dmat);
   end;

   outimg:=TOCVImage.Create(1,1,3);
   colMatch:=CvScalar_(0,0,255,0);
   colPoint:=CvScalar_(-1,-1,-1,-1);
   pCvDrawMatches(img1.PCvMatPtr, vecKeypoint1.pCvVector, img2.PCvMatPtr, vecKeypoint2.pCvVector,
                    firstmatches.pCvVector, outimg.PCvMatPtr, colMatch, colPoint);
   cvstr.pstr:=PAnsiChar(AnsiString('Matches result'));
   pCvimshow(@cvstr, outimg.PCvMatPtr);

 finally
  if not (ptrorb = nil) then
  begin
      pCvBFMatcherDelete(bfmatcher);
      pCvScalarDelete(colMatch);
      pCvScalarDelete(colPoint);

      matches.Free;
      firstmatches.Free;
      outimg.Free;

      ptrorb.Free;
      img1.Free;
      img2.Free;
      detectors1.Free;
      vecKeypoint1.Free;
      detectors2.Free;
      vecKeypoint2.Free;

      lstmatches.Free;
  end;
 end;


end;

end.
