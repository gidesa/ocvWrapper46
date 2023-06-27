{ Test for Opencv  deep artificial neural network (DNN) classes
  This sample demonstrates the use of pretrained Midas depth prediction with opencv's dnn module.

   First download neural net pretrained model files  from:

   https://github.com/isl-org/MiDaS/releases/download/v2_1/model-small.onnx

  Copy net files in program project directory (es. C:\MidasDNN)
  Rename to: Midas-v2.1-model-small.onnx
  -----------------------------------------------------------------------------

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
unit frmMidasDNN;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs,
  OPENCVWrapper,
  Vcl.StdCtrls;

type
  TForm7 = class(TForm)
    btn1: TButton;
    dlgOpen1: TOpenDialog;
    lbl1: TLabel;
    txImg1: TEdit;
    btnLoad1: TButton;
    lblTime: TLabel;
    procedure btn1Click(Sender: TObject);
    procedure btnLoad1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form7: TForm7;

implementation

{$R *.dfm}

var
  W_IN: integer =  256;
  H_IN: Integer =  256;
  SCALE: Single  = 0.003922;


procedure TForm7.btn1Click(Sender: TObject);
const
  MODEL_BIN_NAME = '..\..\Midas-v2.1-model-small.onnx';
var
  modelBin: CvString_t;

  cvstr: CvString_t;

  img: PCvMat_t;

  net: PCvdnn_Net_t;

  blob: PCvMat_t;
  outmat: PCvMat_t;
  heatMap: PCvMat_t;
  outgray: PCvMat_t;
  outHeatmap: PCvMat_t;
  outColor: PCvMat_t;

  scalparm: PCvScalar_t;
  inpSize: PCvSize_t;
  outcvSize: PCvSize_t;

  outsizedim: Integer;
  outsize: array of Integer;
  vMin, vMax: Double;
  outH, outW: Integer;
  outptr: UInt64;

  matdims: array[0..1] of Integer;
{ Variables }
  Freq, StartCount, StopCount: Int64;
  TimingSeconds: real;
begin
try
    img:=nil;
    cvstr.pstr:=PAnsiChar(AnsiString(txImg1.Text));
    img:=pCvimread(@cvstr, Ord(IMREAD_COLOR));
    if (pCvMatGetWidth(img) = 0) then
    begin
      ShowMessage('Error: image not exists');
      img:=nil;
      Exit;
    end;
    btn1.Enabled:=False;
    Application.ProcessMessages;

    modelBin.pstr := PAnsiChar(MODEL_BIN_NAME);
    net := pCvdnn_readNetFromONNX(@modelBin);
    pCvdnn_NetsetPreferableBackend(net, Ord(DNN_BACKEND_OPENCV));
    pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_CPU));
    if (pCvocl_haveOpenCL()) then
    begin
        pCvocl_setUseOpenCL(True);
        pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_OPENCL));
    end;


    // send image through the network
    scalparm:=CvScalar_(0,0,0, 0);
    inpSize:=CvSize_(W_IN, H_IN);
    blob := pCvdnn_blobFromImage(img, SCALE, inpSize, scalparm);
    pCvdnn_NetsetInput(net, blob);

{ Precise measurement of time in ms }
  QueryPerformanceFrequency(Freq);
  QueryPerformanceCounter(StartCount);

    outmat:= pCvdnn_Netforward(net);


    outptr:=pCvMatGetDimPtr(outmat, 0, 0);
    matdims[0]:=256;
    matdims[1]:=256;
    heatMap:=pCvMatCreate(2, @matdims[0],  CV_32F, outptr);
    pCvminMaxLoc(heatMap, @vMin, @vMax );
    outgray:=pCvMatCreateEmpty;
    pCvMatConvertTo(heatMap, outgray, CV_8UC1, (255.0/(vMax - vMin)));
    pCvcvtColor(outgray, outgray, Ord(COLOR_GRAY2BGR));
    outcvSize:=CvSize_(pCvMatGetWidth(img), pCvMatGetHeight(img));
    pCvresize(outgray, outgray, outcvSize);

  QueryPerformanceCounter(StopCount);
  // msec
  TimingSeconds := 1000 * (StopCount - StartCount) / Freq;
    lblTime.Caption:=FloatToStr(TimingSeconds)+' msec';

    outHeatmap:=pCvMatCreateEmpty;
    pCvapplyColorMap(outgray, outHeatmap, Ord(COLORMAP_JET));
    outColor:=pCvMatCreateEmpty;
    pCvaddWeighted(img,0.5,outHeatmap,0.8,0, outColor);

    cvstr.pstr:=PAnsiChar('Midas depth estimation');
    pCvimshow(@cvstr, outColor);

    btn1.Enabled:=True;
finally
  if img<>nil then
  begin
    pCvdnn_NetDelete(net);

    pCvMatDelete(img);
    pCvMatDelete(blob);
    pCvMatDelete(outmat);
    pCvMatDelete(outgray);
    pCvMatDelete(outColor);
    pCvMatDelete(outHeatmap);

    pCvScalarDelete(scalparm);
    pCvSizeDelete(inpSize);
    pCvSizeDelete(outcvSize);

  end;
end;
end;

procedure TForm7.btnLoad1Click(Sender: TObject);
begin
  if dlgOpen1.Execute() then
  begin
    txImg1.Text:=dlgOpen1.FileName;
  end;
end;

end.
