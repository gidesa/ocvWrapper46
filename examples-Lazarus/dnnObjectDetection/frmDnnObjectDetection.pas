{ Test for Opencv  deep artificial neural network (DNN) classes
  A C++ example program from Opencv distribution,  translated to Delphi/Pascal.
  This sample demonstrates object detection deep learning networks using OpenCV.

   First download neural net pretrained model files  from:
  https://pjreddie.com/media/files/yolov3.weights

  Copy net files in program project directory (es. C:\dnnObjectDetection)
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
unit frmDnnObjectDetection;

{$MODE Delphi}

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics,
  Controls, Forms, Dialogs,
  Generics.Collections,
  OPENCVWrapper,
  StdCtrls;

type
  TForm7 = class(TForm)
    btn1: TButton;
    dlgOpen1: TOpenDialog;
    lbl1: TLabel;
    txImg1: TEdit;
    btnLoad1: TButton;
    txConf: TEdit;
    lbl2: TLabel;
    procedure btn1Click(Sender: TObject);
    procedure btnLoad1Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
    net:       PCvdnn_Net_t;
    outNames:  PCvvector_String;
    classes:   TStringList;
  public
//    { Public declarations }
  end;

var
  Form7: TForm7;

implementation

{$R *.lfm}
const
  MODEL_BIN_NAME = '..\..\yolov3.weights';
  MODEL_CONFIG_NAME = '..\..\yolov3.cfg';
  MODEL_CLASSES_NAME = '..\..\object_detection_classes_yolov3.txt';

type
  TDetection = class
    confidence: Double;
    classId:    Integer;
    box    :    TRect;
    nsmValid:   Boolean;
  end;

var
  W_IN: integer =  416;
  H_IN: Integer =  416;

  THRESHOLD: Single  = 0.70;
  NMS_THRES: Single  = 0.5;
  SCALE:     Single  = 0.00392;
  SWAPRB:    Boolean = True;


procedure TForm7.btn1Click(Sender: TObject);
var
  i, j: Integer;

  cvstr:     CvString_t;

  img:       PCvMat_t;
  blob:      PCvMat_t;
  outmat:    PCvMat_t;
  scores:    PCvMat_t;

  vecOut:    PCvvector_Mat;
  vecBoxes:  PCvvector_Rect2d;
  vecScores: PCvvector_float;
  vecNmsIndex: PCvvector_int;


  scalparm:  PCvScalar_t;
  mean:      PCvScalar_t;
  inpSize:   PCvSize_t;
  classIdPoint: PCvPoint_t;
  labelSize: PCvSize_t;
  pta, ptb:  PCvPoint_t;
  box2d:     PCvRect2d_t;

  boxs:      CvRect2dS;
  pts:       CvPointS;

  classLabel: string;
  baseline:   Integer;

  nmsNr:      Integer;

  w, h:           Integer;
  fX, fY:         Single;
  outH, outW:     Integer;
  dptr:           UInt64;
  conf:           Single;
  maxClassScore:  Double;
  minClassScore:  Double;
  cx, cy, rw, rh: Single;
  nmsThreshold:   Single;


  matdims: array[0..3] of Integer;
  detections:     TList<TDetection>;
  detect:         TDetection;
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
    w:=pCvMatGetWidth(img);
    h:=pCvMatGetHeight(img);


    // send image through the network
    mean:=CvScalar_(0,0,0, 0);
    inpSize:=CvSize_(W_IN, H_IN);
    blob := pCvdnn_blobFromImage(img, 1.0, inpSize, nil, swapRB, false, CV_8U);
    pCvdnn_NetsetInput(net, blob, nil, SCALE, mean);

    vecOut:=pCvVectorMatCreate(0);
    pCvdnn_NetforwardV4(net, vecOut, outNames);



    // Network produces output blob with a shape NxC where N is a number of
    // detected objects and C is a number of classes + 4 where the first 4
    // numbers are [center_x, center_y, width, height]
    matdims[0]:=classes.Count;
    fX:= w ;
    fY:= h ;
    classIdPoint:=pCvPointCreate();

    outmat:=pCvVectorMatGet(vecOut, 0);
    dptr:=pCvMatGetData(outmat);
    outW:=pCvMatGetWidth(outmat);
    outH:=pCvMatGetHeight(outmat);

    THRESHOLD:=StrToInt(txConf.Text) / 100;
    detections:=TList<TDetection>.Create;
    for j:=0 to  outH-1 do
    begin
       conf:=PSingle(dptr+4*SizeOf(single))^;
       if conf>=THRESHOLD then
       begin
          scores:=pCvMatCreate(1, @matdims[0],CV_32FC1, (dptr+5*SizeOf(single)));

          pCvminMaxLoc(scores, @minclassscore, @maxclassscore, nil, classIdPoint );
          begin
            detect:=TDetection.Create;
            pCvPointToStruct(classIdPoint, @pts);
            detect.confidence := maxClassScore;
            detect.classId:=pts.y;
            cx:=PSingle(dptr)^;
            cy:=PSingle(dptr+1*SizeOf(single))^;
            rw:=PSingle(dptr+2*SizeOf(single))^;
            rh:=PSingle(dptr+3*SizeOf(single))^;
            detect.box.Left:=  Round((cx - 0.5*rw) * fX);
            detect.box.Top:=   Round((cy - 0.5*rh) * fY);
            detect.box.Width:= Round(rw * fX);
            detect.box.Height:=Round(rh * fY);
            detect.nsmValid:=False;

            detections.add(detect);
          end;

          pCvMatDelete(scores);
       end;
       dptr := dptr + outW*SizeOf(single);
    end;

    // Non Maxima Suppression (NMS) delete overlapped boxes with equal class
    vecBoxes:=pCvVectorRect2dCreate(detections.Count);
    vecScores:=pCvVectorfloatCreate(detections.Count);
    i:=0;
    for detect in detections do
    begin
      box2d:=CvRect2d_(detect.box.Left, detect.box.Top, detect.box.Width, detect.box.Height);
      pCvVectorRect2dSet(vecBoxes, i, box2d);
      pCvVectorfloatSet(vecScores, i, detect.confidence);
      Inc(i);
    end;
    vecNmsIndex:=pCvVectorintCreate(0);
    pCvdnn_NMSBoxes(vecBoxes, vecScores, THRESHOLD,  NMS_THRES, vecNmsIndex);
    nmsNr:=pCvVectorintLength(vecNmsIndex);
    for i:=0 to nmsNr-1 do
    begin
      detections.Items[pCvVectorintGet(vecNmsIndex, i)].nsmValid:=True;
    end;

    pta:=pCvPointCreate();
    ptb:=pCvPointCreate();
    scalparm:=CvScalar_(0,255,0,0);
    for detect in detections do
    begin
        // not valid after NMS calculation
        if detect.nsmValid=False then Continue;
        pta:=CvPoint_(detect.box.TopLeft.X, detect.box.TopLeft.y, pta);
        ptb:=CvPoint_(detect.box.BottomRight.X, detect.box.BottomRight.y, ptb);
        pCvrectangle(img, pta, ptb, scalparm, 2);

        classLabel:=Format('%s %4.2f %%',  [classes.Strings[detect.classId], (detect.confidence*100)]);
        cvstr.pstr:=PAnsiChar(AnsiString(classLabel));
        labelSize:=pCvgetTextSize(@cvstr, Ord(FONT_HERSHEY_SIMPLEX), 0.8, 2, @baseline);
        pCvputText(img, @cvstr, pta, ord(FONT_HERSHEY_SIMPLEX), 0.8, scalparm);
    end;

    cvstr.pstr:=PAnsiChar('Yolo object detection');
    pCvimshow(@cvstr, img);

    btn1.Enabled:=True;
finally
  if img<>nil then
  begin
    pCvMatDelete(img);
    pCvMatDelete(blob);
    pCvMatDelete(outmat);

    pCvVectorMatDelete(vecOut);
    pCvVectorRect2dDelete(vecBoxes);
    pCvVectorfloatDelete(vecScores);
    pCvVectorintDelete(vecNmsIndex);


    pCvScalarDelete(scalparm);
    pCvScalarDelete(mean);
    pCvSizeDelete(inpSize);
    pCvPointDelete(classIdPoint);
    pCvPointDelete(pta);
    pCvPointDelete(ptb);

    detections.Free;
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

procedure TForm7.FormCreate(Sender: TObject);
var
  modelBin:  CvString_t;
  modelTxt:  CvString_t;
begin
try
  classes:=TStringList.Create;
  classes.LoadFromFile(MODEL_CLASSES_NAME);

  modelBin.pstr := PAnsiChar(MODEL_BIN_NAME);
  modelTxt.pstr :=PAnsiChar(MODEL_CONFIG_NAME);
  net := pCvdnn_readNet(@modelBin, @modelTxt);
  pCvdnn_NetsetPreferableBackend(net, Ord(DNN_BACKEND_OPENCV));
  pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_CPU));
  if (pCvocl_haveOpenCL()) then
  begin
      pCvocl_setUseOpenCL(True);
      pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_OPENCL));
  end;
  outNames:=pCvdnn_NetgetUnconnectedOutLayersNames(net);

  txConf.Text:=FloatToStr(Round(THRESHOLD*100));
except
  on E: Exception do
  begin
    ShowMessage('Error on create: '+ e.Message);
    Halt(99);
  end;
end;

end;

end.
