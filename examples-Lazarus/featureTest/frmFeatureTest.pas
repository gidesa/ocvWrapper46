{ Test for Opencv ORB feature detector class with ocvWrapper
  version for Lazarus/Freepascal

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

{$IFDEF FPC}
  {$MODE Delphi}
{$ENDIF}

interface

uses
  Forms, Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Dialogs,
  OPENCVWrapper,
  StdCtrls;




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

{$IFnDEF FPC}
uses
  System.Contnrs;
{$ELSE}
uses
  Contnrs;
{$ENDIF}

{$IFnDEF FPC}
  {$R *.dfm}
{$ELSE}
  {$R *.lfm}
{$ENDIF}

const
  window_name = 'Matches';
type
 TPair = class
 public
   ind: Integer;
   dist: single;
 end;
 PPair = ^TPair;

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
 cimg1, cimg2: CvString_t;
 img1, img2: PCvMat_t;
 outimg: PCvMat_t;
 detectors1: PCvMat_t;
 detectors2: PCvMat_t;
 matches: PCvvector_DMatch;
 firstmatches: PCvvector_DMatch;
 lstmatches: TObjectList;
 pr: TPair;
 dmat: PCvDMatch_t;
 match_results: Integer;
 d: Single;
 cvstr: CvString_t;
 ptrorb: PCvPtr_ORB;
 porb: PCvORB_t;
 vecKeypoint1: PCvVector_Keypoint;
 vecKeypoint2: PCvVector_Keypoint;
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
  cimg1.pstr:=PAnsiChar(AnsiString(txImg1.Text));
  cimg2.pstr:=PAnsiChar(AnsiString(txImg2.Text));
  img1:=pCvimread(@cimg1, Ord(IMREAD_GRAYSCALE));
  img2:=pCvimread(@cimg2, Ord(IMREAD_GRAYSCALE));

  BEST_MATCHES_PERC:=0.1;

  ptrorb:=pCvORB_create();
  porb:=pCvPtr_ORBConvert(ptrorb);


  detectors1:=pCvMatCreateEmpty();
  vecKeypoint1:=pCvVectorKeypointCreate(0);
  pCvORBdetectAndCompute(porb, img1, pCvDefaultMat, vecKeypoint1, detectors1);

  detectors2:=pCvMatCreateEmpty();
  vecKeypoint2:=pCvVectorKeypointCreate(0);
  pCvORBdetectAndCompute(porb, img2, pCvDefaultMat, vecKeypoint2, detectors2);

  bfmatcher:=pCvBFMatcherCreate(Ord(TCvNormTypes.NORM_HAMMING),True);
  matches:=pCvVectorDMatchCreate(0);
  pCvBFMatchermatch(bfmatcher, detectors1, detectors2, matches);

  lstmatches:=TObjectList.Create;
  l:=pCvVectorDMatchLength(matches);
  for i:=0 to l-1 do
  begin
    dmat:=pCvVectorDMatchGet(matches, i);
    d:=pCvDMatchGet_distance(dmat);

    pr:=TPair.Create;
    pr.ind := i;
    pr.dist := d;
    lstmatches.Add(pr);
    pCvDMatchDelete(dmat);
  end;

  lstmatches.Sort(compAsc);
  match_results := Round(l*BEST_MATCHES_PERC);
  firstmatches:=pCvVectorDMatchCreate(match_results);
  for i:=0 to match_results-1 do
  begin
    pr:=lstmatches.Items[i] as TPair;
    dmat:=pCvVectorDMatchGet(matches, pr.ind);
    pCvVectorDMatchSet(firstmatches, i, dmat);
    pCvDMatchDelete(dmat);
  end;

  outimg:=pCvMatCreateEmpty();
  colMatch:=CvScalar_(0,0,255,0);
  colPoint:=CvScalar_(-1,-1,-1,-1);
  pCvDrawMatches(img1, vecKeypoint1, img2, vecKeypoint2, firstmatches, outimg, colMatch, colPoint);
  cvstr.pstr:=PAnsiChar(AnsiString('Matches result'));
  pCvimshow(@cvstr, outimg);

finally
 if not (ptrorb = nil) then
 begin
     pCvBFMatcherDelete(bfmatcher);
     pCvVectorDMatchDelete(matches);
     pCvVectorDMatchDelete(firstmatches);
     pCvMatDelete(outimg);
     pCvScalarDelete(colMatch);
     pCvScalarDelete(colPoint);

     pCvPtr_ORBDelete(ptrorb, porb);
     pCvMatDelete(img1);
     pCvMatDelete(img2);
     pCvMatDelete(detectors1);
     pCvVectorKeypointDelete(vecKeypoint1);
     pCvMatDelete(detectors2);
     pCvVectorKeypointDelete(vecKeypoint2);

     lstmatches.Free;
 end;
end;



end;

end.
