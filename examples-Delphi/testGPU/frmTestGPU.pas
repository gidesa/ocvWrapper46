{ Test for compare performance of Opencv with CPU versus GPU (by OpenCL)

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
unit frmTestGPU;

interface

uses
  Winapi.Windows, System.SysUtils, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms,
  OPENCVWrapper, Vcl.StdCtrls;

type
  TForm1 = class(TForm)
    btn1: TButton;
    me1: TMemo;
    procedure btn1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}
const
  IMG_NAME = '..\..\testocl.jpg';
  NUM_CYCLES = 1000;



procedure TForm1.btn1Click(Sender: TObject);
var
  i: integer;
  img, gray: PCvMat_t;
  uimg, ugray: PCvUMat_t;
  ksize: PCvSize_t;

  t1, t2: TDateTime;
  diff1, diff2: Double;
  cyclediff, ucyclediff, rdiff: Double;
  w, h, t: Integer;
  isocl: string;
  cvimg: CvString_t;

  pcvstr: PCvString_t;
  ocldev: PCvocl_Device_t;
  devicedata: string;

begin
 form1.me1.Clear;
 btn1.Enabled:=False;
 Application.ProcessMessages;
   ksize:=CvSize_(7,7);
   if pCvocl_haveOpenCL() then
      isocl:='True'
   else
   begin
       isocl:='False';
   end;
   form1.me1.Lines.Add('Is graphic card OpenCL enabled? '+isocl);
   if isocl = 'False' then Exit;

   pCvsetUseOptimized(True);

   pCvocl_setUseOpenCL(True);
   ocldev:=pCvocl_DevicegetDefault();
   pcvstr:=pCvocl_Devicename(ocldev);
   devicedata:=AnsiString(pcvstr.pstr);
   pCvStringDelete(pcvstr);
   pcvstr:=pCvocl_DeviceOpenCLVersion(ocldev);
   devicedata:= '   Device: '+devicedata + '   -  OpenCL version: '+AnsiString(pcvstr.pstr);
   pCvStringDelete(pcvstr);
   pCvocl_DeviceDelete(ocldev);
   Form1.me1.Lines.Add(devicedata);

   // extract image dimensions
   cvimg.pstr:=PAnsiChar(IMG_NAME);
   img := pCvimread(@cvimg, ord(IMREAD_COLOR));
   uimg := pCvMatToUmat(pCvimread(@cvimg, ord(IMREAD_COLOR)));
   w:= pCvMatGetWidth(img);
   h:= pCvMatGetHeight(img);
   t:= pCvMatGetType(img);

   cyclediff:=0;
   rdiff    :=0;
   pCvocl_setUseOpenCL(false);
for i:=1 to NUM_CYCLES do
begin
  gray:=pCvMatImageCreate(w, h, t);
// start timing
t1:=Time();
  pCvcvtColor(img, gray, ord(COLOR_BGR2GRAY));
  pcvGaussianBlur(gray, gray, ksize, 1.5);
  pCvCanny(gray, gray, 0, 50, 3, False);
t2:=Time();
  diff1:=(t2 - t1) * 10;
  cyclediff := (cyclediff * (i-1) + diff1) / i;
  pCvMatDelete(gray);
end;

  ucyclediff:=0;
  pCvocl_setUseOpenCL(true);
for i:=1 to NUM_CYCLES do
begin
  ugray:=pCvUMatCreateV2(w, h, t, TCvUMatUsageFlags.USAGE_ALLOCATE_DEVICE_MEMORY);
// start timing
t1:=Time();
  pCvcvtColorv2(uimg, ugray, ord(COLOR_BGR2GRAY));
  pcvGaussianBlurv2(ugray, ugray, ksize, 1.5);
  pCvCannyv2(ugray, ugray, 0, 50, 3, False);
t2:=Time();
  diff2:=(t2 - t1) * 10;
  ucyclediff := (ucyclediff *(i-1) +  diff2) / i;
  pCvUMatDelete(ugray);
end;
  rdiff:=(cyclediff/ucyclediff) ;

  form1.me1.lines.Add('Image is '+IntToStr(w)+'x'+IntToStr(h)+' color.');
  Form1.me1.Lines.Add(Format('Average time for CPU %8.7f and GPU %8.7f',[cyclediff, ucyclediff]));
  form1.me1.Lines.Add('Ratio between normal (CPU) elapsed, and accelerated processing elapsed (OpenCL GPU): ');
  form1.me1.Lines.Append(FloatToStr(rdiff));
  form1.me1.lines.Append('calculated as average on '+ IntToStr(NUM_CYCLES)  +' cycles. ');
  if rdiff>1 then
     form1.me1.Lines.Append('So accelerated processing with OpenCL GPU is '+FloatToStr(rdiff)+
              '  faster than with CPU only!');


  pCvSizeDelete(ksize);
  pCvMatDelete(img);
  pCvUMatDelete(uimg);

 btn1.Enabled:=True;
 Application.ProcessMessages;


end;

end.
