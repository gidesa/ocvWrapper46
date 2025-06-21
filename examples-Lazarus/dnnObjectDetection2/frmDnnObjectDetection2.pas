{ Test for Opencv  deep artificial neural network (DNN) classes
  This sample demonstrates object detection using the fast MobilenetSSD neural network.
  Also demonstrate the use of TOcvimage and TOcvparamMat classes.

   First download neural net pretrained model files  from:
  https://github.com/djmv/MobilNet_SSD_opencv/blob/master/MobileNetSSD_deploy.caffemodel
  https://github.com/djmv/MobilNet_SSD_opencv/blob/master/MobileNetSSD_deploy.prototxt

  Copy net files in program project directory (es. C:\dnnObjectDetection2)
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
unit frmDnnObjectDetection2;

{$MODE Delphi}

interface

uses
  {$ifdef MSWINDOWS} Windows, {$EndIf}
  StdCtrls, Dialogs,
  SysUtils, Variants, Classes, Graphics,
  Controls, Forms,
  Generics.Collections,
  OPENCVWrapper,  unOCVImage;

type
  TForm7 = class(TForm)
    btn1: TButton;
    dlgOpen1: TOpenDialog;
    lbl1: TLabel;
    txImg1: TEdit;
    btnLoad1: TButton;
    txConf: TEdit;
    lbl2: TLabel;
    chkOpenCL: TCheckBox;
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
  MODEL_BIN_NAME     = '..\..\MobileNetSSD_deploy.caffemodel';
  MODEL_CONFIG_NAME  = '..\..\MobileNetSSD_deploy.prototxt';
  MODEL_CLASSES_NAME = '..\..\object_detection_classes_mobilenetSSD.txt';

type
  TDetection = class
    confidence: Double;
    classId:    Integer;
    box    :    TRect;
    nsmValid:   Boolean;
  end;

var
  W_IN: integer  = 300;
  H_IN: Integer  = 300;

  THRESHOLD: Single  = 0.70;
  NMS_THRES: Single  = 0.5;
  SCALE:     Single  = 0.007843;
  SWAPRB:    Boolean = False;
  MEANVAL:   Single  = 127.5;




procedure TForm7.btn1Click(Sender: TObject);
var
  i, j: Integer;

  cvstr:     CvString_t;

  useOCL:    Boolean;

  img:       TOCVImage;
  blob:      PCvMat_t;
  outmat:    TOcvParamMat;
  netResult :TOcvParamMat;

  uimg:      PCvUMat_t;
  ublob:     PCvUMat_t;
  uoutmat:   PCvUMat_t;



  vecOut:    PCvvector_Mat;
  vecBoxes:  PCvvector_Rect2d;
  vecScores: PCvvector_float;
  vecNmsIndex: PCvvector_int;

  uvecOut:   PCvvector_UMat;


  scalparm:  PCvScalar_t;
  mean:      PCvScalar_t;
  inpSize:   PCvSize_t;
  labelSize: PCvSize_t;
  pta, ptb:  PCvPoint_t;
  box2d:     PCvRect2d_t;

  //boxs:      CvRect2dS;
  //pts:       CvPointS;

  classLabel: string;
  baseline:   Integer;

  nmsNr:      Integer;

  w, h:           Integer;
  fX, fY:         Single;
//  outH,
  outW:     Integer;
  dptr:           UInt64;
  conf:           Single;
  cx, cy, rw, rh: Single;
  nmsThreshold:   Single;


  matdims: TArray<Integer>;
  resDims: TArray<Integer>;
  defaultArr: TArray<UInt64>;
  nrDetections:   Integer;
  detections:     TList<TDetection>;
  detect:         TDetection;
begin
try
    img:=nil;
    try
       img:=TOCVImage.Create(txImg1.Text);
    except
              ShowMessage('Error: image not exists');
              img:=nil;
              Exit;
    end;
    btn1.Enabled:=False;
    Application.ProcessMessages;

    useOCL:=chkOpenCL.Checked;


    w:=img.width;
    h:=img.height;

    // send image through the network
    mean:=CvScalar_(MEANVAL, MEANVAL, MEANVAL, 0);
    inpSize:=CvSize_(W_IN, H_IN);


    if useOCL then
    begin
        uimg:=pCvMatToUmat(img.PCvMatPtr);
        blob :=  pCvdnn_blobfromImageV2(uimg, SCALE, inpSize, mean, SWAPRB);
        ublob:=pCvMatToUmat(blob);
        pCvdnn_NetsetInputV2(net, ublob);

        uvecOut:=pCvVectorUMatCreate(0);
        pCvdnn_NetforwardV5(net, uvecOut, outNames);
    end else
    begin
        blob :=  pCvdnn_blobfromImage(img.PCvMatPtr, SCALE, inpSize, mean, SWAPRB);
        pCvdnn_NetsetInput(net, blob);

        vecOut:=pCvVectorMatCreate(0);
        pCvdnn_NetforwardV4(net, vecOut, outNames);
    end;




    // The shape of output blob (the first matrix in vecOut) is  1x1xNx7, where N is a number of detections and
    // 7 is a vector of each detection with these fields:
    //  [batchId, classId, confidence, left, top, right, bottom]
    fX:= w ;
    fY:= h ;

    if useOCL then
    begin
         uoutmat:= pCvVectorUMatGet(uvecOut, 0);
         outmat:=TOcvParamMat.Create(pCvMatFromUmat(uoutmat));
    end else
         outmat:=TOcvParamMat.Create(pCvVectorMatGet(vecOut, 0));

    dptr:=pCvMatGetData(outmat.PCvMatPtr);

    matdims:=outmat.Shape();
    Assert(Length(matdims)>=4, 'Output Mat number of dimensions is less than 4');
    nrDetections:=matdims[2];
    outW:=matdims[3];

    THRESHOLD:=StrToInt(txConf.Text) / 100;
    detections:=TObjectList<TDetection>.Create;

    SetLength(defaultArr, 0);
    SetLength(resDims, 2);
    resdims[0]:=1;
    resdims[1]:=outW;

    for j:=0 to  nrDetections-1 do
    begin
       // define a 1 x outW mat  over a block of the output matrix
       netResult:=TOcvParamMat.Create(resdims, cvSingle, 1, dptr, defaultArr);
       conf:=netResult.at[0, 2, 0];
       if conf>=THRESHOLD then
       begin
          begin
            detect:=TDetection.Create;
            detect.confidence := conf;
            detect.classId := netResult.atInt[0,1,0] ;
            cx:=netResult.at[0, 3,0];
            cy:=netResult.at[0, 4,0];
            rw:=netResult.at[0, 5,0];
            rh:=netResult.at[0, 6,0];

            detect.box.Left:=  Round((cx * W_IN) * (fX / W_IN));
            detect.box.Top:=   Round((cy * H_IN) * (fY / H_IN));
            detect.box.Width:= Round(( (rw - cx) * W_IN) * (fX / W_IN));
            detect.box.Height:=Round(( (rh - cy) * H_IN) * (fY / H_IN));


            detect.nsmValid:=False;

            detections.add(detect);
          end;
       end;
       netResult.Free;
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
        pCvrectangle(img.PCvMatPtr, pta, ptb, scalparm, 2);

        classLabel:=Format('%s %4.2f %%',  [classes.Strings[detect.classId], (detect.confidence*100)]);
        cvstr.pstr:=PAnsiChar(AnsiString(classLabel));
        labelSize:=pCvgetTextSize(@cvstr, Ord(FONT_HERSHEY_SIMPLEX), 0.8, 2, @baseline);
        pCvputText(img.PCvMatPtr, @cvstr, pta, ord(FONT_HERSHEY_SIMPLEX), 0.8, scalparm);
    end;

    cvstr.pstr:=PAnsiChar('MobilenetSSD object detection');
    pCvimshow(@cvstr, img.PCvMatPtr);

    btn1.Enabled:=True;
finally
  if img<>nil then
  begin
    img.Free;
    outmat.Free;
    pCvMatDelete(blob);

    if useOCL then
    begin
        pCvUMatDelete(uimg);
        pCvUMatDelete(ublob);
        pCvUMatDelete(uoutmat);
        pCvVectorUMatDelete(uvecOut);
    end else
        pCvVectorMatDelete(vecOut);

    pCvVectorRect2dDelete(vecBoxes);
    pCvVectorfloatDelete(vecScores);
    pCvVectorintDelete(vecNmsIndex);


    pCvScalarDelete(scalparm);
    pCvScalarDelete(mean);
    pCvSizeDelete(inpSize);
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

  net := pCvdnn_readNetFromCaffe(@modeltxt,@modelbin);

  pCvdnn_NetsetPreferableBackend(net, Ord(DNN_BACKEND_OPENCV));
  pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_CPU));
  if (pCvocl_haveOpenCL()) then
  begin
      pCvocl_setUseOpenCL(True);
      pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_OPENCL));
      chkOpenCL.Enabled:=True;
      chkOpenCL.Checked:=True;
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
