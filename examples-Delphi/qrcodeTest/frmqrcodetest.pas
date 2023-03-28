{ Test for Opencv  QR code capture class  with ocvWrapper, using webcam

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
unit frmQrcodeTest;


interface


uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics,
  Controls, Forms, Dialogs,
  OPENCVWrapper,
  StdCtrls;


type

  { TForm6 }

  TForm6 = class(TForm)
    btnStart: TButton;
    lbl1: TLabel;
    lbl2: TLabel;
    lbQrcode: TLabel;
    procedure btnStartClick(Sender: TObject);
  private
    { Private declarations }
    procedure drawContour(img: PCvUMat_t; corners: PCvMat_t);
  public
    { Public declarations }
  end;

var
  Form6: TForm6;

implementation

{$R *.dfm}


const
  window_name = 'QRCode detection';

procedure TForm6.drawContour(img: PCvUMat_t; corners: PCvMat_t);
var
    c: Integer;
    cvpt1, cvpt2: PCvPoint_t;
    scvpt: array[0..3] of CvPointS;
    ptcolor: PCvScalar_t;
begin
    ptcolor:=CvScalar_(0, 255, 0, 0);
    for c:=0 to 3 do
    begin
      scvpt[c].x:= Round(pCvMatGetFloat(corners, 0, 2*c));
      scvpt[c].y:= Round(pCvMatGetFloat(corners, 0, 2*c+1));
    end;
    cvpt1:=pCvPointCreate();
    cvpt2:=pCvPointCreate();
    pCvlineV2(img, CvPoint_(scvpt[0].x, scvpt[0].y, cvpt1), CvPoint_(scvpt[1].x, scvpt[1].y, cvpt2), ptcolor, 3);
    pCvlineV2(img, CvPoint_(scvpt[1].x, scvpt[1].y, cvpt1), CvPoint_(scvpt[2].x, scvpt[2].y, cvpt2), ptcolor, 3);
    pCvlineV2(img, CvPoint_(scvpt[2].x, scvpt[2].y, cvpt1), CvPoint_(scvpt[3].x, scvpt[3].y, cvpt2), ptcolor, 3);
    pCvlineV2(img, CvPoint_(scvpt[3].x, scvpt[3].y, cvpt1), CvPoint_(scvpt[0].x, scvpt[0].y, cvpt2), ptcolor, 3);

    pCvPointDelete(cvpt1);
    pCvPointDelete(cvpt2);
    pCvScalarDelete(ptcolor);
end;



procedure TForm6.btnStartClick(Sender: TObject);
var
    winame: CvString_t;
    capture: PCvVideoCapture_t;

    uframe: PCvUMat_t;
    ucorners: PCvUMat_t;
    ustrqrcode: PCvUMat_t;

    corners: PCvMat_t;

    qrdet: PCvQRCodeDetector_t;
    pqrcode: PCvString_t;
    qrcode: AnsiString;
    imgname: CvString_t;

    nc: Integer;
    c: Integer;
    ty: Integer;
begin
try
  btnStart.Enabled:=False;
  winame.pstr:= PAnsiChar(AnsiString(window_name));

  capture:=pCvVideoCaptureCreate();

  uframe:=pCvUMatCreate();
  ucorners:=pCvUMatCreate();
  ustrqrcode:=pCvUMatCreate();

  qrdet:=pCvQRCodeDetectorCreate();


  pCvVideoCaptureopenV3(capture, 0, ord(CAP_ANY));
  if not(pCvVideoCaptureisOpened(capture)) then
  begin
     ShowMessage('Open webcam error');
     Exit;
  end;
  while True do
  begin

     if not(pCvVideoCapturereadV2(capture, uframe)) then Break;
     pqrcode := pCvQRCodeDetectordetectAndDecodeV2(qrdet, uframe, ucorners, ustrqrcode);
     qrcode:=pqrcode.pstr;
     if length(qrcode)>0 then
     begin
        lbQrcode.Caption:=qrcode;
        corners:=pCvMatFromUmat(ucorners);
        nc:=pCvMatGetWidth(corners);
        ty:=pCvMatGetType(corners);
        Assert((nc=4) and (ty=CV_32FC2), 'Returned corners Mat must be of type CV_32FC2 with 4 columns');
        drawContour(uframe, corners);
        pCvMatDelete(corners);
        ucorners:=pCvUMatCreate();
     end
     else
         lbQrcode.Caption:='Nothing';

     pCvimshowV2(@winame, uframe );


     c:=pCvwaitKey(10);
     if Char(c) = 'c' then Break;
     Application.ProcessMessages;
  end;
  pCvdestroyWindow(@winame);
  btnStart.Enabled:=True;
finally
  pCvVideoCaptureDelete(capture);

  pCvUMatDelete(uframe);
  pCvUMatDelete(ucorners);
  pCvUMatDelete(ustrqrcode);
end;

end;

end.
