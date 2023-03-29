{ Test for Opencv  deep artificial neural network (DNN) classes
  A C++ example program from Opencv distribution,  translated to Delphi/Pascal.
  This sample demonstrates the use of pretrained openpose networks with opencv's dnn module.

  It can be used for body pose detection, using  the COCO model(18 parts).

   First download neural net pretrained model files  from:
  http://posefs1.perception.cs.cmu.edu/OpenPose/models/pose/coco/pose_iter_440000.caffemodel
  https://raw.githubusercontent.com/opencv/opencv_extra/4.x/testdata/dnn/openpose_pose_coco.prototxt

  Copy net files in program project directory (es. C:\dnnOpenPose)
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
unit frmDnnOpenPose;

{$MODE Delphi}

interface

uses
  SysUtils, Classes, Graphics,
  Controls, Forms, Dialogs,
  OPENCVWrapper,
  StdCtrls;

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

{$R *.lfm}

var
{ connection table for COCO model  in the format [pair_id][from/to]
 please look at the nice explanation at the bottom of:
 https://github.com/CMU-Perceptual-Computing-Lab/openpose/blob/master/doc/output.md
}
  POSE_PAIRS: array[0..19, 0..1] of integer = (
     (1,2),  (1,5),   (2,3),
     (3,4),  (5,6),   (6,7),
     (1,8),  (8,9),   (9,10),
     (1,11), (11,12),(12,13),
     (1,0),  (0,14),
     (14,16),(0,15),(15,17),
     (0,0),  (0,0),  (0,0)
);
  NPAIRS: integer = 17;
  NPARTS: Integer = 18;
  W_IN: integer =  368;
  H_IN: Integer =  368;
  THRESHOLD: Single = 0.1;
  SCALE: Single  = 0.003922;


procedure TForm7.btn1Click(Sender: TObject);
const
  MODEL_BIN_NAME = '..\..\pose_iter_440000.caffemodel';
  MODEL_PROTOTXT_NAME = '..\..\openpose_pose_coco.prototxt';
var
  n: Integer;
  modelBin: CvString_t;
  modelTxt: CvString_t;

  cvstr: CvString_t;

  img: PCvMat_t;

  net: PCvdnn_Net_t;

  blob: PCvMat_t;
  outmat: PCvMat_t;
  heatMap: PCvMat_t;

  points: PCvvector_Point;
  scalparm: PCvScalar_t;
  inpSize: PCvSize_t;
  p, pm: PCvPoint_t;
  pta, ptb: PCvPoint_t;

  a, b: CvPointS;

  outsizedim: Integer;
  outsize: array of Integer;
  w, h: Integer;
  outH, outW: Integer;
  outptr: UInt64;

  SX, SY: Single;
  conf: Double;
  matdims: array[0..3] of Integer;
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
    modelTxt.pstr :=PAnsiChar(MODEL_PROTOTXT_NAME);
    net := pCvdnn_readNet(@modelBin, @modelTxt);
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


    outmat:= pCvdnn_Netforward(net);

    // the result is an array of "heatmaps", the probability of a body part being in location x,y
    outsizedim:=pCvMatGetDimsNum(outmat);
    SetLength(outsize, outsizedim);
    pCvMatGetDims(outmat, @outsize[0]);
    outH:=outsize[2];
    outW:=outsize[3];


    // find the position of the body parts
    points:=pCvVectorPointCreate(22);

    matdims[0]:=outH;
    matdims[1]:=outW;
    for n:=0 to NPARTS-1 do
    begin
        // Slice heatmap of corresponding body's part.
        outptr:=pCvMatGetDimPtr(outmat, 0, n);
        heatMap:=pCvMatCreate(2, @matdims[0],  CV_32F, outptr);
        // 1 maximum per heatmap
        pm:=pCvPointCreate();
        p:=pCvPoint_1_1;
        pCvminMaxLoc(heatMap, 0, @conf, nil, pm);
        if (conf > THRESHOLD) then
            p := pm;
        //points[n] = p;
        pCvVectorPointSet(points, n, p);
        pCvMatDelete(heatMap);
    end;


    // connect body parts and draw it !
    w:=pCvMatGetWidth(img);
    h:=pCvMatGetHeight(img);
    SX := w / outW;
    SY := h / outH;
    for n:=0 to NPAIRS-1 do
    begin
        // lookup 2 connected body/hand parts
         pta := pCvVectorPointGet(points, POSE_PAIRS[n][0]);
         ptb := pCvVectorPointGet(points, POSE_PAIRS[n][1]);

         pCvPointToStruct(pta, @a);
         pCvPointToStruct(ptb, @b);
        // we did not find enough confidence before
        if (a.x<=0) or (a.y<=0) or (b.x<=0) or (b.y<=0)  then
            continue;

        // scale to image size
        a.x:=Round(a.x*SX); a.y:=Round(a.y* SY);
        b.x:=Round(b.x*SX); b.y:=Round(b.y* SY);
        pCvPointFromStruct(pta, @a);
        pCvPointFromStruct(ptb, @b);


        scalparm:=CvScalar_(0,200,0,0, scalparm);
        pCvline(img, pta, ptb, scalparm, 2);
        scalparm:=CvScalar_(0,0,200,0, scalparm);
        pCvcircle(img, pta, 3, scalparm, -1);
        pCvcircle(img, ptb, 3, scalparm, -1);

        pCvPointDelete(pta);
        pCvPointDelete(ptb);
    end;

    cvstr.pstr:=PAnsiChar('OpenPose');
    pCvimshow(@cvstr, img);

    btn1.Enabled:=True;
finally
  if img<>nil then
  begin
    pCvdnn_NetDelete(net);

    pCvMatDelete(img);
    pCvMatDelete(blob);
    pCvMatDelete(outmat);

    pCvScalarDelete(scalparm);
    pCvSizeDelete(inpSize);
    pCvVectorPointDelete(points);

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
