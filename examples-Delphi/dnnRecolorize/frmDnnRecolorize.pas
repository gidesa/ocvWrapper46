{ Test for Opencv  deep artificial neural network (DNN) classes
  Recolorize a gray image using a DNN net
  A C++ example program from Opencv distribution,  translated to Delphi/Pascal.
  This program is based on:\n"
    http://richzhang.github.io/colorization\n"
    https://github.com/richzhang/colorization\n"
  First download neural net files (caffemodel and prototxt files) from:
    http://eecs.berkeley.edu/~rich.zhang/projects/2016_colorization/files/demo_v2/colorization_release_v2.caffemodel
    https://raw.githubusercontent.com/richzhang/colorization/caffe/models/colorization_deploy_v2.prototxt

  Copy net files in program project directory (es. C:\dnnRecolorize)
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
unit frmDnnRecolorize;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs,
  opencvwrapper, Vcl.StdCtrls;

type
  TForm7 = class(TForm)
    btn1: TButton;
    dlgOpen1: TOpenDialog;
    lbl1: TLabel;
    txImg1: TEdit;
    btnLoad1: TButton;
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
// the 313 ab cluster centers from pts_in_hull.npy (already transposed)
  HULL_PTS: array[0..625] of Single = (
      -90.0, -90.0, -90.0, -90.0, -90.0, -80.0, -80.0, -80.0, -80.0, -80.0, -80.0, -80.0, -80.0, -70.0, -70.0, -70.0, -70.0, -70.0, -70.0, -70.0, -70.0,
    -70.0, -70.0, -60.0, -60.0, -60.0, -60.0, -60.0, -60.0, -60.0, -60.0, -60.0, -60.0, -60.0, -60.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -50.0,
    -50.0, -50.0, -50.0, -50.0, -50.0, -50.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -40.0, -30.0,
    -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -30.0, -20.0, -20.0, -20.0, -20.0, -20.0, -20.0, -20.0,
    -20.0, -20.0, -20.0, -20.0, -20.0, -20.0, -20.0, -20.0, -20.0, -10.0, -10.0, -10.0, -10.0, -10.0, -10.0, -10.0, -10.0, -10.0, -10.0, -10.0, -10.0, -10.0,
    -10.0, -10.0, -10.0, -10.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0,
    10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0, 20.0,
    20.0, 20.0, 20.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 30.0, 40.0, 40.0, 40.0, 40.0,
    40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 40.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0,
    50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 50.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0, 60.0,
    60.0, 60.0, 60.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 70.0, 80.0, 80.0, 80.0,
    80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 80.0, 90.0, 90.0, 90.0, 90.0, 90.0, 90.0, 90.0, 90.0, 90.0, 90.0,
    90.0, 90.0, 90.0, 90.0, 90.0, 90.0, 90.0, 90.0, 90.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 100.0, 50.0, 60.0, 70.0, 80.0, 90.0,
    20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0,
    60.0, 70.0, 80.0, 90.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0,
    30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0, -50.0,
    -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0,
    30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0, -70.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0,
    100.0, -80.0, -70.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, -80.0, -70.0, -60.0, -50.0,
    -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, -90.0, -80.0, -70.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0,
    0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, -100.0, -90.0, -80.0, -70.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0,
    40.0, 50.0, 60.0, 70.0, 80.0, 90.0, -100.0, -90.0, -80.0, -70.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0,
    80.0, -110.0, -100.0, -90.0, -80.0, -70.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, -110.0, -100.0,
    -90.0, -80.0, -70.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, -110.0, -100.0, -90.0, -80.0, -70.0,
    -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, -110.0, -100.0, -90.0, -80.0, -70.0, -60.0, -50.0, -40.0, -30.0,
    -20.0, -10.0, 0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, -90.0, -80.0, -70.0, -60.0, -50.0, -40.0, -30.0, -20.0, -10.0, 0.0
);
  hull_dims: array[0..3] of Integer = (2, 313, 1, 1);

procedure TForm7.btn1Click(Sender: TObject);
const
  MODEL_BIN_NAME = '..\..\colorization_release_v2.caffemodel';
  MODEL_DEFINE_NAME = '..\..\colorization_deploy_v2.prototxt';

  IMG_NAME = '..\..\grayimg.jpg';

  W_IN = 224;
  H_IN = 224;
var
  d1, d2: Integer;
  i: Integer;
  net: PCvdnn_Net_t;
  modelTxt: CvString_t;
  modelBin: CvString_t;

  cvstr: CvString_t;
  img: PCvMat_t;
  colorImg: PCvMat_t;
  w, h: Integer;
  pts_in_hull: PCvMat_t;
  indxs: array[0..3] of Integer;
  indx2: array[0..3] of Integer;

  ptrclass8_ab: PCvPtr_Layer;
  class8_ab: PCvdnn_Layer_t;

  ptrconv8_313_rh: PCvPtr_Layer;
  conv8_313_rh: PCvdnn_Layer_t;
  matconv8: PCvMat_t;
  scalconv8: PCvScalar_t;
  vecmat: PCvvector_Mat;

  lab, L, input: PCvMat_t;
  inputSize: PCvSize_t;
  inputBlob: PCvMat_t;
  resultMat: PCvMat_t;
  resultDims: array of Integer;
  resultDataptr: array of UInt64;
  A,B: PCvMat_t;
begin
try
    modelTxt.pstr := PAnsiChar(MODEL_DEFINE_NAME);
    modelBin.pstr := PAnsiChar(MODEL_BIN_NAME);
    net := pCvdnn_readNetFromCaffe(@modelTxt, @modelBin);
    pCvdnn_NetsetPreferableBackend(net, Ord(DNN_BACKEND_OPENCV));
    if (pCvocl_haveOpenCL()) then
    begin
        pCvocl_setUseOpenCL(True);
        pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_OPENCL));
    end;

    cvstr.pstr:=PAnsiChar(AnsiString(txImg1.Text));
    img:=pCvimread(@cvstr, Ord(IMREAD_COLOR));
    if (pCvMatGetWidth(img) = 0) then
    begin
      ShowMessage('Error: image not exists');
      Exit;
    end;


    pts_in_hull:=pCvMatCreate(4, @hull_dims[0], CV_32F);
    i:=0;
    indxs[2]:=0;
    indxs[3]:=0;
    for d1:=0 to hull_dims[0]-1 do
       for d2:=0 to hull_dims[1]-1 do
       begin
         indxs[0]:=d1;
         indxs[1]:=d2;
         pCvMatSetFloatMultidim(pts_in_hull, @indxs[0], HULL_PTS[i]);
         Inc(i);
       end;
    btn1.Enabled:=False;

    // setup additional layers:
    cvstr.pstr:='class8_ab';
    ptrclass8_ab:=pCvdnn_NetgetLayerV2(net, @cvstr);
    class8_ab := pCvPtr_LayerConvert(ptrclass8_ab);
    vecmat:=pCvVectorMatCreate(1);
    pCvVectorMatSet(vecmat, 0, pts_in_hull);
    pCvdnn_LayerSet_blobs(class8_ab,  vecmat);

    cvstr.pstr:='conv8_313_rh';
    ptrconv8_313_rh:=pCvdnn_NetgetLayerV2(net, @cvstr);
    conv8_313_rh := pCvPtr_LayerConvert(ptrconv8_313_rh);
    matconv8:=pCvMat2dCreate(1,313, CV_32F);
    scalconv8:=CvScalar_(2.606, 2.606, 2.606, 2.606);
    pCvMatFill(matconv8, scalconv8);
    pCvVectorMatSet(vecmat, 0, matconv8);
    pCvdnn_LayerSet_blobs(conv8_313_rh,  vecmat);

    // extract L channel and subtract mean
    input:=pCvMat2dCreate(W_IN, H_IN, CV_32F);
    pCvMatConvertTo(img, img, CV_32F, 1.0/255);

    lab:=pCvMatClone(img);
    L:=pCvMatClone(img);
    pCvcvtColor(img, lab, Ord(COLOR_BGR2Lab));
    pCvMatExtractChannel(lab, L, 0);
    inputSize:=CvSize_(W_IN, H_IN);
    pCvresize(L, input, inputSize);
    pCvMatScalarOp(input, '-', 50);


    // run the L channel through the network
    inputBlob :=  pCvdnn_blobFromImage(input);
    pCvdnn_NetsetInput(net, inputBlob);
    resultMat:=pCvdnn_Netforward(net);

    // retrieve the calculated a,b channels from the network output
    SetLength(resultDims, pCvMatGetDimsNum(resultMat));
    SetLength(resultDataptr, Length(resultDims));
    pCvMatGetDims(resultMat, @resultDims[0]);
    indxs[0]:=resultDims[2];
    indxs[1]:=resultDims[3];
    indxs[2]:=0;
    indxs[3]:=0;

    A:=pCvMatCreate(2, @indxs[0], CV_32F, pCvMatGetDimPtr(resultMat, 0,0) );
    B:=pCvMatCreate(2, @indxs[0], CV_32F, pCvMatGetDimPtr(resultMat, 0,1) );
    inputSize:=CvSize_(pCvMatGetWidth(img), pCvMatGetHeight(img), inputSize);
    pCvresize(A, A, inputSize);
    pCvresize(B, B, inputSize);


    // merge, and convert back to BGR
    pCvVectorMatDelete(vecmat);
    vecmat:=pCvVectorMatCreate(3);
    pCvVectorMatSet(vecmat, 0, L);
    pCvVectorMatSet(vecmat, 1, A);
    pCvVectorMatSet(vecmat, 2, B);
    pCvmerge(vecmat, lab);

    colorImg:=pCvMatClone(img);
    scalconv8:=CvScalar_(0,0,0,0, scalconv8);
    pCvMatFill(colorImg, scalconv8);
    pCvcvtColor(lab, colorImg, Ord(COLOR_Lab2BGR));

    cvstr.pstr:=PAnsiChar('Colorized image');
    pCvimshow(@cvstr, colorImg);
    cvstr.pstr:=PAnsiChar('Input gray image');
    pCvimshow(@cvstr, img);

    btn1.Enabled:=True;
finally
  pCvdnn_NetDelete(net);
  pCvPtr_LayerDelete(ptrclass8_ab, class8_ab);
  pCvPtr_LayerDelete(ptrconv8_313_rh, conv8_313_rh);

  pCvVectorMatDelete(vecmat);
  pCvSizeDelete(inputSize);
  pCvScalarDelete(scalconv8);
  pCvMatDelete(img);
  pCvMatDelete(colorImg);
  pCvMatDelete(pts_in_hull);
  pCvMatDelete(matconv8);
  pCvMatDelete(lab);
  pCvMatDelete(L);
  pCvMatDelete(input);
  pCvMatDelete(inputBlob);
  pCvMatDelete(resultMat);
  pCvMatDelete(A);
  pCvMatDelete(B);

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
