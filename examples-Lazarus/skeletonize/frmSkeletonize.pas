{  Skeletonize an image

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
unit frmSkeletonize;

{$MODE Delphi}

interface

uses StdCtrls, Dialogs, Forms,
OPENCVWrapper;


type
  TForm6 = class(TForm)
    btnStart: TButton;
    lbl1: TLabel;
    txImg1: TEdit;
    btnLoad1: TButton;
    dlgOpen1: TOpenDialog;
    procedure btnStartClick(Sender: TObject);
    procedure btnLoad1Click(Sender: TObject);
  private
    { Private declarations }
    procedure skeletonize(imgInput: PCvMat_t);
  public
    { Public declarations }
  end;

var
  Form6: TForm6;

implementation

{$R *.lfm}

const
  window_name = 'Skeletonize';



procedure TForm6.skeletonize(imgInput: PCvMat_t);
 var
   i: Integer;
   skel: PCvMat_t;
   temp, eroded: PCvMat_t;
   element: PCvMat_t;
   anchor: PCvPoint_t;
   erodeAnchor: PCvPoint_t;
   borderValue: PCvScalar_t;
   done: integer;
   w, h: Integer;
   ksize: PCvSize_t;
   n: Integer;
 begin
   w:=pCvMatGetWidth(imgInput);
   h:=pCvMatGetHeight(imgInput);

   skel  :=pCvMatImageCreate(w, h, CV_8UC1);
   temp  :=pCvMatImageCreate(w, h, CV_8UC1);
   eroded:=pCvMatImageCreate(w, h, CV_8UC1);

   ksize := CvSize_(3,3);
   anchor := CvPoint_(1,1);
   element := pCvgetStructuringElement(Ord(TCvMorphShapes.MORPH_CROSS), ksize, anchor);
   done:=1;
   n:=0;
   erodeAnchor:=CvPoint_(-1, -1);
   borderValue:=pCvMorphologyDefaultBordeValue();
   for i:=1 to 500 do
   begin
       pCverode(imgInput, eroded, element, erodeAnchor, 1);
       pCvdilate(eroded, temp, element, erodeAnchor, 1);
       pCvsubtract(imgInput, temp, temp);
       w:=pCvMatGetType(skel);
       w:=pCvMatGetType(temp);
       pCvbitwise_or(skel, temp, skel);
       pCvMatCopy(eroded, imgInput);
       done := pcvCountNonZero(imgInput);

       if done=0 then Break;
   end;
   pCvthreshold(skel, skel, 25, 255, Ord(TCvThresholdTypes.THRESH_BINARY));
   pCvMatCopy(skel, imgInput);

   pCvMatDelete(skel);
   pCvMatDelete(temp);
   pCvMatDelete(eroded);
   pCvMatDelete(element);
   pCvSizeDelete(ksize);
   pCvPointDelete(anchor);
   pCvPointDelete(erodeAnchor);
   pCvScalarDelete(borderValue);
end;


procedure TForm6.btnLoad1Click(Sender: TObject);
begin
  if dlgOpen1.Execute() then
  begin
    txImg1.Text:=dlgOpen1.FileName;
  end;
end;


procedure TForm6.btnStartClick(Sender: TObject);
 var
  img1: PCvMat_t;
  cimg1, cvstr: CvString_t;
 begin
 try
   img1:=nil;
   if (txImg1.Text = '')  then
   begin
     ShowMessage('Select an image');
     Exit;
   end;
   cimg1.pstr:=PAnsiChar(AnsiString(txImg1.Text));

   img1:=pCvimread(@cimg1, Ord(IMREAD_GRAYSCALE));
   skeletonize(img1);
   cvstr.pstr:=PAnsiChar(AnsiString(window_name));
   pCvimshow(@cvstr, img1);

 finally
  if not (img1 = nil) then
  begin
      pCvMatDelete(img1);
  end;
 end;



end;

end.
