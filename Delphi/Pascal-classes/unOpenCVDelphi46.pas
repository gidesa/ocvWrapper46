{
   This unit contains classes encapsulating various Opencv functions and algorithms
   about:  object detection, faces detection, faces recognition.

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
  ----------------------------------------------------------------------------
  Object detection: download neural network Yolo V4 lite from:
  binary:
    https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights
  config:
    https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg
  classes:
    https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/coco.names
  ----------------------------------------------------------------------------
  Face Detection: Download neural network face_detection_yunet_2022mar.onnx from
    https://github.com/opencv/opencv_zoo/tree/master/models/face_detection_yunet
  ----------------------------------------------------------------------------
  Face Recognition: Download neural network face_recognition_sface_2021dec.onnx from
    https://github.com/opencv/opencv_zoo/tree/master/models/face_recognition_sface
  ----------------------------------------------------------------------------
}

{$IFDEF FPC}
  {$mode Delphi}
{$ENDIF}


unit unOpenCVDelphi46;
{.. $DEFINE DEBUGTIME}

interface
uses  Classes, Sysutils,
      {$IFDEF MSWINDOWS} Windows, {$ENDIF}
      {$IFDEF LCL}
      Graphics,
      Types,
      ExtCtrls,
      Generics.Collections,
      {$ELSE}
      Vcl.Graphics,
      Types,
      Vcl.ExtCtrls,
      System.Generics.Collections,
      {$ENDIF}
      OPENCVWrapper, unOCVImage;

type
  //** This class encapsulates data for object detection in image
  TDetection = class
  public
    //** Confidence is a measure of quality. Greater is confidence more truthful is detection.
    confidence: Double;
    //** ClassId is the numeric id of the class/category of object
    classId:    Integer;
    //** Name of the class/category of object
    className:  string;
    //** Box is the rectangle inside the image that contains the object detected
    box    :    TRect;
    //** nsmValid is a flag used internally in Non Maxima Suppression (NMS) processing.
    //** Overlapped detections with nsmValid=False are deleted from the final results
    nsmValid:   Boolean;
    //** Numeric id of the image where the detection is found. Used in threaded  detections
    imageId:    Integer;

    //** Draw the object box on a bitmap, scaled to x and y factors
    procedure draw(const bmp: TBitmap; scaleX, scaleY: single); virtual;
  end;

  //** This class encapsulates extended data for faces detection and recognition in image
  TFaceDetection = class(TDetection)
  public
    //** all X,Y pairs represent the position in image of one face part:
    //** eyes, nose, mouth.
    rightEyeX:  Single;
    rightEyeY:  Single;
    leftEyeX:   Single;
    leftEyeY:   Single;
    noseTipX:   Single;
    noseTipY:   Single;
    rightCornerMouthX: Single;
    rightCornerMouthY: Single;
    leftCornerMouthX:  Single;
    leftCornerMouthY:  Single;
    //** recognition score with cosine measure
    reconCosScore:     Single;
    //** recognition score with L2 norm measure
    reconL2NormScore:  Single;

    procedure draw(const bmp: TBitmap; scaleX, scaleY: single);  override;
  end;

  //** This record contains the name and the features signature for a face.
  // The record is used in faces recognition class
  TFaceRecord = class
     faceName: string;
     faceFeatures: PCvMat_t;
  end;

  { Detection list cannot be an TObjectList, because detection objects
    must be deleted only AFTER being processed, that is programmatically
    and not in automated mode; instead TObjecList delete all objects when Clear-ed }
  TDetectionList = class(TList<TDetection>);

  //** Interface for classes that detect something inside an image. Input is a TOCVImage object;
  // output is a list of detected objects, could be empty
  IDNNDetection = interface
    procedure process(const ocvimg: TOCVImage; detections: TDetectionList);
  end;

  //** This class encapsulates object detection processing
  TOcvDNNObjDetect = class(TInterfacedObject, IDNNDetection)
  private
    net:       PCvdnn_Net_t;
    outNames:  PCvvector_String;

    classes:   TStringList;

    fModelBinName:     string;
    fModelConfigName:  string;
    fModelClassesName: string;
    fThreshold: Single;

    procedure setThreshold(val: Single);
  public
    //** Constructor requires names of these files of the neural network model:
    //** bin file name; config file name; classes names list file
    constructor Create(const modelBinName: string; const modelConfigName: string; const modelClassesName: string );
    destructor Destroy; override;
    //** Process an image, and return a list of detections, can be empty
    procedure process(const ocvimg: TOCVImage; detections: TDetectionList);

    //** Threshold on the detection confidence: only detections with confidence >= threshold
    // are returned. Default 0.7
    property threshold: single read fThreshold write setThreshold;
  end;

  //** Modes used by face recognition object when processing:
  //** FRCreateDb = detect faces in an image, and create a new db of names and their face feature vector
  //** FRCompare  = detect faces in an image, and compare them to the face feature vectors db previously loaded
  TOcvFaceReconMode = (FRCreateDb, FRCompare);

  //** This class encapsulates face recognition processing, that is is assigning a name to detected faces
  TOcvDNNFaceRecognizer = class
  private
    fModelBinName:     string;
    fModelConfigName:  string;
    fMode:             TOcvFaceReconMode;

    ptrnet: PCvPtr_FaceRecognizerSF;
    net:    PCvFaceRecognizerSF_t;

    facesDatabase: TObjectList<TFaceRecord>;

  public
    //** Constructor requires names of these files of the neural network model:
    //** bin file name; config file name, optional
    constructor Create(const modelBinName: string; const modelConfigName: string = '' );
    destructor Destroy; override;
    //** Process an image with the face detections (in Opencv Mat format), and return a list of faces
    // recognized, can be empty
    procedure process(const ocvimg: TOCVImage; const detectionsMat: PCvMat_t; detections: TDetectionList);
    //** From the input image and  the face detections (in Opencv Mat format), extract the features
    //** vector for the 'rowind' detection
    procedure extractFeatures(const ocvimg: TOCVImage; const detectionMat: PCvMat_t;
                        rowind: Integer;  const features: PCvMat_t);
    //** Save the internal features array to file in Opencv Json format
    procedure saveFeatures(const featuresFileName: string);  virtual;
    //** Load the internal features array from a file in Opencv Json format, and the face image-name pairs
    //** from a text file. The pairs are in the format: <image File name>=<name>, one for every line.
    //** for example: img1.jpg=Mary
    procedure loadFeatures(const featuresFileName: string; const faceNamesList: string);  virtual;

    //** The processing mode required: createDb or compare.
    property Mode: TOcvFaceReconMode read FMode write FMode;
  end;



  //** This class encapsulates face detection processing
  TOcvDNNFaceDetect = class(TInterfacedObject, IDNNDetection)
  private
    ptrnet:    PCvPtr_FaceDetectorYN;
    net:       PCvFaceDetectorYN_t;
    inpsize:   PCvSize_t;
    fFaceRecognizer: TOcvDNNFaceRecognizer;

    fModelBinName:     string;
    fModelConfigName:  string;

    fScoreThreshold:   Single;
    fNmsThreshold:      Single;
    fTopK:             Integer;

    fRecognize:     Boolean;


    procedure setScoreThreshold(val: Single);
    procedure setNmsThreshold(val: Single);
    procedure setTopK(val: Integer);
  public
    //** Constructor requires names of these files of the neural network model:
    //** bin file name; config file name, optional
    constructor Create(const modelBinName: string; const modelConfigName: string = '' );
    destructor Destroy; override;
    //** Process an image, and return a list of faces  detected, can be empty
    procedure process(const ocvimg: TOCVImage; detections: TDetectionList);

    //** Threshold on the detection confidence: only face detections with confidence >= threshold
    // are returned. Default 0.9
    property ScoreThreshold: Single read FscoreThreshold write setScoreThreshold;
    //** Non Maxima Suppression (NMS) threshold used internally. Default 0.3
    property NmsThreshold: Single read FNmsThreshold write setNmsThreshold;
    //**  The number of bounding boxes preserved before NMS. Default  5000
    property TopK: integer read FTopK write setTopK;

    //** Flag to activate face recognition
    property Recognize: boolean  read fRecognize write fRecognize;
    //** Face recognition object, used when recognize flag = true; must be created
    // externally
    property FaceRecognizer: TOcvDNNFaceRecognizer read FFaceRecognizer write FFaceRecognizer;
  end;


{*****************************************************************************}
implementation
uses
      {$IFDEF FPC}
      Math,
      {$ELSE}
      System.Math,
      {$ENDIF}
      AutoDestroy;


{******************************************************************************}
{******************** TDetection **********************************************}
{******************************************************************************}

{$REGION 'Tdetection'}
const
  TClassColors: array[0..7] of TColor =  (clRed, clBlue, clGreen, clYellow, clLtGray, clOlive,
  {$IFnDEF FPC}
      clWebCyan, clWebPink
  {$Else}
      clNavy, clPurple
  {$ENDIF}
  );

procedure TDetection.draw(const bmp: TBitmap; scaleX, scaleY: single);
var
  clCol: TColor;
  cap: string;
  icol: Integer;
begin
  Assert(Assigned(bmp),'Error: bitmap is unassigned');
  // empty detection object
  if classId=-1 then Exit;

    bmp.Canvas.Font.Name:='Arial';
    bmp.Canvas.Font.Size:=10;
    bmp.Canvas.Pen.Style:=psDot;
    bmp.Canvas.Pen.Width:=2;

    iCol:=classId mod Length(TClassColors);
    bmp.Canvas.Pen.Color := TClassColors[icol];
    clCol := TClassColors[icol];

    bmp.Canvas.Brush.Color := clCol;
    bmp.Canvas.Brush.Style := bsClear;

    box.Left:=Round(box.Left* scaleX);
    box.Top:=Round(box.Top* scaleY);
    box.Right:=Round(box.Right * scaleX);
    box.Bottom:=Round(box.Bottom * scaleY);
    with box do
        bmp.Canvas.RoundRect(Left,Top,Right,Bottom, 20,20);
    bmp.Canvas.Brush.Style:= bsSolid;
    bmp.Canvas.Brush.Color := clCol;
    bmp.Canvas.Font.Color := clWhite;
    cap:= className + ' - '  + FloatToStr(RoundTo(confidence,-2));
    bmp.Canvas.TextOut(box.Left + 2, box.Top + 1,  cap);

end;

{$ENDREGION}

{******************************************************************************}
{******************** TFaceDetection ******************************************}
{******************************************************************************}

{$REGION 'TFaceDetection'}

procedure TFaceDetection.draw(const bmp: TBitmap; scaleX, scaleY: single);
const
  RWIDTH = 2;
begin
  Assert(Assigned(bmp),'Error: bitmap is unassigned');
  // empty detection object
  if classId=-1 then Exit;


    bmp.Canvas.Pen.Style:=psDot;
    bmp.Canvas.Pen.Width:=3;

    bmp.Canvas.Brush.Style := bsSolid;

    bmp.Canvas.Pen.Color := clRed;
    bmp.Canvas.Rectangle(Round(rightEyeX* scaleX), Round(rightEyeY * scaleY),
                       Round(rightEyeX* scaleX)+RWIDTH, Round(rightEyeY * scaleY)+RWIDTH);
    bmp.Canvas.Rectangle(Round(leftEyeX* scaleX), Round(leftEyeY * scaleY),
                       Round(leftEyeX* scaleX)+RWIDTH, Round(leftEyeY * scaleY)+RWIDTH);

    bmp.Canvas.Pen.Color := clBlue;
    bmp.Canvas.Rectangle(Round(noseTipX* scaleX), Round(noseTipY * scaleY),
                        Round(noseTipX* scaleX)+RWIDTH, Round(noseTipY * scaleY)+RWIDTH);

    bmp.Canvas.Pen.Color := clYellow;
    bmp.Canvas.Rectangle(Round(rightCornerMouthX* scaleX), Round(rightCornerMouthY * scaleY),
                        Round(rightCornerMouthX* scaleX)+RWIDTH, Round(rightCornerMouthY * scaleY)+RWIDTH);
    bmp.Canvas.Rectangle(Round(leftCornerMouthX* scaleX), Round(leftCornerMouthY * scaleY),
                        Round(leftCornerMouthX* scaleX)+RWIDTH, Round(leftCornerMouthY * scaleY)+RWIDTH);

    inherited Draw(bmp, scaleX, scaleY);
end;

{$ENDREGION}

{******************************************************************************}
{******************** TOcvDNNObjDetect ****************************************}
{******************************************************************************}

{$REGION 'TOcvDNNObjDet'}
constructor TOcvDNNObjDetect.Create(const modelBinName: string; const modelConfigName: string;
                      const modelClassesName: string);
var
  modelBin:  CvString_t;
  modelTxt:  CvString_t;
begin
  inherited Create;
  net:=nil;
  outNames:=nil;
try
  classes:=TStringList.Create;
  classes.LoadFromFile(modelClassesName);

  modelBin.pstr := PAnsiChar(AnsiString(modelBinName));
  modelTxt.pstr :=PAnsiChar(AnsiString(modelConfigName));
  net := pCvdnn_readNet(@modelBin, @modelTxt);
  pCvdnn_NetsetPreferableBackend(net, Ord(DNN_BACKEND_OPENCV));
  pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_CPU));
  if (pCvocl_haveOpenCL()) then
  begin
      pCvocl_setUseOpenCL(True);
      pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_OPENCL_FP16));
  end;
  outNames:=pCvdnn_NetgetUnconnectedOutLayersNames(net);

  fThreshold:=0.7;
  fModelBinName:=modelBinName;
  fModelConfigName:=modelConfigName;
  fModelClassesName:=modelClassesName;
except
  on E: Exception do
  begin
     raise Exception.Create('TOcvDNNObjDetect.Create: '+E.Message);
  end;
end;
end;

destructor TOcvDNNObjDetect.Destroy;
begin
  if (net<>nil) then
    pCvdnn_NetDelete(net);
  if (outNames <> nil) then
    pCvVectorStringDelete(outNames);
  if Assigned(classes) then
     classes.Free;

  inherited;
end;

procedure TOcvDNNObjDetect.setThreshold(val: Single);
begin
  if (0<val) and (val<=1.0) then
    fThreshold:=val;
end;

procedure TOcvDNNObjDetect.process(const ocvimg: TOCVImage;
                                       detections: TDetectionList);
const
  OD_W_IN:    integer = 416;
  OD_H_IN:    Integer = 416;
  OD_SCALE:   Single  = 0.00392;
  OD_SWAPRB:  Boolean = True;
  OD_NMS_THRES: Single  = 0.5;

var
  i,j:       Integer;

  img:       PCvMat_t;
  outmat:    PCvMat_t;
  scores:    PCvMat_t;
  blob:      PCvMat_t;

  vecOut:    PCvvector_Mat;
  vecBoxes:  PCvvector_Rect2d;
  vecScores: PCvvector_float;
  vecNmsIndex: PCvvector_int;


  mean:      PCvScalar_t;
  inpSize:   PCvSize_t;
  classIdPoint: PCvPoint_t;
  labelSize: PCvSize_t;
  box2d:     PCvRect2d_t;

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


  matdims:        array[0..3] of Integer;
  detect:         TDetection;
  pts:            CvPointS;

{$IFDEF MSWINDOWS}
{$IFDEF DEBUGTIME}
  t1: uint64;
  t2: Single;
{$ENDIF}
{$ENDIF}
begin
  vecOut:=nil;
  vecBoxes:=nil;
  vecScores:=nil;
  vecNmsIndex:=nil;
  mean:=nil;
  inpSize:=nil;
  classIdPoint:=nil;


try
    Assert(Assigned(ocvimg),'Error: image not assigned');
    Assert(Assigned(detections),'Error: detections list not assigned');
    detections.Clear;

{$IFDEF MSWINDOWS}
{$IFDEF DEBUGTIME}
t1:=GetTickCount;
{$ENDIF}
{$ENDIF}
    img:=ocvimg.PCvMatPtr;
    w:=pCvMatGetWidth(img);
    h:=pCvMatGetHeight(img);

    // send image through the network
    mean:=CvScalar_(0,0,0, 0);
    inpSize:=CvSize_(OD_W_IN, OD_H_IN);
    vecOut:=pCvVectorMatCreate(0);
    blob := CvMatAuto(pCvdnn_blobFromImage(img, 1.0, inpSize, nil, OD_SWAPRB, false, CV_8U)).AsPtr;
    pCvdnn_NetsetInput(net, blob, nil, OD_SCALE, mean);

    pCvdnn_NetforwardV4(net, vecOut, outNames);

    // Network produces output blob with a shape NxC where N is a number of
    // detected objects and C is a number of classes + 4; in detection row the first 4
    // numbers are [center_x, center_y, width, height]
    matdims[0]:=classes.Count;
    fX:= w ;
    fY:= h ;
    classIdPoint:=pCvPointCreate();

    outmat:=CvMatAuto(pCvVectorMatGet(vecOut, 0)).AsPtr;
    dptr:=pCvMatGetData(outmat);
    outW:=pCvMatGetWidth(outmat);
    outH:=pCvMatGetHeight(outmat);

    for j:=0 to  outH-1 do
    begin
       conf:=PSingle(dptr+4*SizeOf(single))^;
       if conf>=fThreshold then
       begin
          scores:=pCvMatCreate(1, @matdims[0],CV_32FC1, (dptr+5*SizeOf(single)));

          pCvminMaxLoc(scores, @minclassscore, @maxclassscore, nil, classIdPoint );
          begin
            detect:=TDetection.Create;
            pCvPointToStruct(classIdPoint, @pts);
            detect.confidence := maxClassScore;
            detect.classId:=pts.y;
            try
                detect.className:=classes.Strings[detect.classId];
            except
                // class name not found
                detect.className:='???';
            end;
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
    pCvdnn_NMSBoxes(vecBoxes, vecScores, fThreshold,  OD_NMS_THRES, vecNmsIndex);
    nmsNr:=pCvVectorintLength(vecNmsIndex);
    for i:=0 to nmsNr-1 do
    begin
      detections.Items[pCvVectorintGet(vecNmsIndex, i)].ImageId:=ocvimg.ID;
      detections.Items[pCvVectorintGet(vecNmsIndex, i)].nsmValid:=True;
    end;

    j:=1;
    while j=1 do
    begin
      j:=0;
      for detect in detections do
        if detect.nsmValid=False then
        begin
            detections.Remove(detect);
            detect.Free;
            j:=1;
        end;
    end;

{$IFDEF MSWINDOWS}
{$IFDEF DEBUGTIME}
t2:=(GetTickCount - t1)/1000;
OutputDebugString(PWideChar(floattostr(t2)+' '+IntToStr(detections.Count)));
{$ENDIF}
{$ENDIF}

finally
  if vecBoxes<>nil then
    pCvVectorRect2dDelete(vecBoxes);
  if vecScores<>nil then
    pCvVectorfloatDelete(vecScores);
  if vecNmsIndex<>nil then
    pCvVectorintDelete(vecNmsIndex);
  if vecOut<>nil then
    pCvVectorMatDelete(vecOut);


  if mean<>nil then
    pCvScalarDelete(mean);
  if inpSize<>nil then
    pCvSizeDelete(inpSize);
  if classIdPoint<>nil then
    pCvPointDelete(classIdPoint);
end;
end;
{$ENDREGION}

{******************************************************************************}
{******************** TOcvDNNFaceDetect ***************************************}
{******************************************************************************}

{$REGION 'TOcvDNNFaceDetect'}
constructor TOcvDNNFaceDetect.Create(const modelBinName: string; const modelConfigName: string);
var
  modelBin:  CvString_t;
  modelCfg:  CvString_t;

  pstrCfg:  PCvString_t;
begin
  inherited Create;
  ptrnet:=nil;
  net:=nil;
  inpsize:=nil;
try
  modelBin.pstr := PAnsiChar(AnsiString(modelBinName));
  inpsize:=CvSize_(320, 320);
  fScoreThreshold:=0.9;
  fNmsThreshold:=0.3;
  fTopK:=5000;
  fRecognize:=False;
  fFaceRecognizer:=nil;

  fModelBinName:=modelBinName;
  fModelConfigName:=modelConfigName;
  if fModelConfigName='' then
    pstrCfg:=pCvStringEmpty
  else
  begin
    modelCfg.pstr:=PAnsiChar(AnsiString(modelConfigName));
    pstrCfg:=@modelCfg;
  end;
  ptrnet:=pCvFaceDetectorYN_create(@modelBin, pstrCfg, inpsize, fScoreThreshold, fNmsThreshold, fTopK);
  net:=pCvPtr_FaceDetectorYNConvert(ptrnet);
except
  on E: Exception do
  begin
     raise Exception.Create('TOcvDNNFaceDetect.Create: '+E.Message);
  end;
end;
end;

destructor TOcvDNNFaceDetect.Destroy;
begin
  if (ptrnet<>nil) then
    pCvPtr_FaceDetectorYNDelete(ptrnet, net);
  if (inpsize) <> nil then
    pCvSizeDelete(inpsize);
  // delete internal face recognizer, if any
  if fFaceRecognizer<>nil then
    fFaceRecognizer.Free;
  inherited;
end;

procedure TOcvDNNFaceDetect.setScoreThreshold(val: Single);
begin
  if (0<val) and (val<=1.0) then
  begin
    fScoreThreshold:=val;
    pCvFaceDetectorYNsetScoreThreshold(net, fScoreThreshold);
  end;
end;

procedure TOcvDNNFaceDetect.setNmsThreshold(val: Single);
begin
  if (0<val) and (val<=1.0) then
  begin
    fNmsThreshold:=val;
    pCvFaceDetectorYNsetNMSThreshold(net, fNmsThreshold);
  end;
end;

procedure TOcvDNNFaceDetect.setTopK(val: Integer);
begin
  if (val >=0) then
  begin
    fTopK:=val;
    pCvFaceDetectorYNsetTopK(net, fTopK);
  end;
end;


procedure TOcvDNNFaceDetect.process(const ocvimg: TOCVImage;
                                       detections: TDetectionList);
var
  i:         Integer;

  img:       PCvMat_t;
  w, h:           Integer;
  outH, outW:     Integer;
  detect:         TFaceDetection;
  detectMat:      TOcvParamMat;

{$IFDEF MSWINDOWS}
{$IFDEF DEBUGTIME}
  t1: uint64;
  t2: Single;
{$ENDIF}
{$ENDIF}
begin
    Assert(Assigned(ocvimg),'Error: image not assigned');
    Assert(Assigned(detections),'Error: detections list not assigned');
    detections.Clear;

{$IFDEF MSWINDOWS}
{$IFDEF DEBUGTIME}
t1:=GetTickCount;
{$ENDIF}
{$ENDIF}

  img:=ocvimg.PCvMatPtr;
  w:=ocvimg.width;
  h:=ocvimg.height;
  // class variable, not local; so not delete
  inpSize:=CvSize_(w, h, inpSize);

  pCvFaceDetectorYNsetInputSize(net, inpsize);
  pCvFaceDetectorYNsetScoreThreshold(net, fScoreThreshold);
  pCvFaceDetectorYNsetNMSThreshold(net, fNmsThreshold);
  pCvFaceDetectorYNsetTopK(net, fTopK);


  // send image through the network
  detectMat:=TOcvParamMat.CreateEmpty;

  pCvFaceDetectorYNdetect(net, img, detectMat.PCvMatPtr);




  // prepare detection results
  outW:=detectMat.width;
  outH:=detectMat.height;

  for i:=0 to  outH-1 do
  begin
      detect:=TFaceDetection.Create;

      detect.classId:=1;
      detect.className:='face';
      detect.imageId:=ocvimg.ID;
      detect.nsmValid:=True;


      detect.box.Left:=  detectMat.atInt[i, 0, 0];
      detect.box.Top:=   detectMat.atInt[ i, 1, 0];
      detect.box.Width:= detectMat.atInt[ i, 2, 0];
      detect.box.Height:=detectMat.atInt[ i, 3, 0];
      detect.rightEyeX:= detectMat.at[ i, 4, 0];
      detect.rightEyeY:= detectMat.at[ i, 5, 0];
      detect.leftEyeX:=  detectMat.at[ i, 6, 0];
      detect.leftEyeY:=  detectMat.at[ i, 7, 0];
      detect.noseTipX:=  detectMat.at[ i, 8, 0];
      detect.noseTipY:=  detectMat.at[ i, 9, 0];
      detect.rightCornerMouthX:=detectMat.at[ i,10, 0];
      detect.rightCornerMouthY:=detectMat.at[ i,11, 0];
      detect.leftCornerMouthX:= detectMat.at[ i,12, 0];
      detect.leftCornerMouthY:= detectMat.at[ i,13, 0];
      detect.confidence := detectMat.at[ i,14, 0];


      detections.add(detect);
  end;
  if (fRecognize) and (fFaceRecognizer<>nil) then
  begin
    fFaceRecognizer.process(ocvimg, detectMat.PCvMatPtr, detections);
  end;

  detectMat.Free;
{$IFDEF MSWINDOWS}
{$IFDEF DEBUGTIME}
t2:=(GetTickCount - t1)/1000;
OutputDebugString(PWideChar('fd '+floattostr(t2)+' '+IntToStr(detections.Count)));
{$ENDIF}
{$ENDIF}
end;
{$ENDREGION}


{******************************************************************************}
{******************** TOcvDNNFaceRecognizer ***********************************}
{******************************************************************************}
{$REGION 'TOcvFaceRecognizer'}

const
  FR_COS_THRESHOLD = 0.363;
  FR_L2_NORM_THRESHOLD = 1.128;


constructor TOcvDNNFaceRecognizer.Create(const modelBinName: string; const modelConfigName: string);
var
  modelBin:  CvString_t;
  modelCfg:  CvString_t;

  pstrCfg:  PCvString_t;
begin
  inherited Create;
  ptrnet:=nil;
  net:=nil;
  facesDatabase:=TObjectList<TFaceRecord>.Create;
try
  modelBin.pstr := PAnsiChar(AnsiString(modelBinName));
  fModelBinName:=modelBinName;
  fModelConfigName:=modelConfigName;
  fMode:=FRCompare;
  if fModelConfigName='' then
    pstrCfg:=pCvStringEmpty
  else
  begin
    modelCfg.pstr:=PAnsiChar(AnsiString(modelConfigName));
    pstrCfg:=@modelCfg;
  end;
  ptrnet:=pCvFaceRecognizerSF_create(@modelBin, pstrCfg);
  net:=pCvPtr_FaceRecognizerSFConvert(ptrnet);
except
  on E: Exception do
  begin
     raise Exception.Create('TOcvDNNFaceRecognizer.Create: '+E.Message);
  end;
end;
end;

destructor TOcvDNNFaceRecognizer.Destroy;
var
  faceRec: TFaceRecord;
begin
  if (net<>nil) then
    pCvPtr_FaceRecognizerSFDelete(ptrnet, net);
  if Assigned(facesDatabase) then
  begin
    for faceRec in facesDatabase do
      pCvMatDelete(faceRec.faceFeatures);
    facesDatabase.Free;
  end;
  inherited Destroy;
end;

procedure TOcvDNNFaceRecognizer.extractFeatures(const ocvimg: TOCVImage;
          const detectionMat: PCvMat_t; rowind: Integer; const features: PCvMat_t);
var
  firstRec:     PCvMat_t;
  alignedImg:   PCvMat_t;
  featuresTemp: PCvMat_t;
begin
{$IFDEF FPC}
  // FPC not always releases interfaced objects at procedure/function end
  firstRec:=pCvMatGetRow(detectionMat, rowind);
  alignedImg:=pCvMatCreateEmpty;
  featuresTemp:=pCvMatCreateEmpty;
{$ELSE}
  firstRec:=CvMatAuto(pCvMatGetRow(detectionMat, rowind)).AsPtr;
  alignedImg:=CvMatAuto(pCvMatCreateEmpty).AsPtr;
  featuresTemp:=CvMatAuto(pCvMatCreateEmpty).AsPtr;
{$ENDIF}

  pCvFaceRecognizerSFalignCrop(net, ocvimg.PCvMatPtr, firstRec, alignedImg);


  // a temp Mat is needed, because this function always reuses the same internal data buffer
  pCvFaceRecognizerSFfeature(net, alignedImg, featuresTemp);
  pCvMatCopy(featuresTemp, features);
{$IFDEF FPC}
  pCvMatDelete(firstRec);
  pCvMatDelete(alignedImg);
  pCvMatDelete(featuresTemp);
{$ENDIF}
end;


procedure TOcvDNNFaceRecognizer.process(const ocvimg: TOCVImage; const detectionsMat: PCvMat_t;
                      detections: TDetectionList);
var
  i: Integer;
  cos_score: Double;
  L2_score:  Double;

  features:  PCvMat_t;
  faceRec:   TFaceRecord;
  max_cos:   Double;
  min_L2:    Double;
begin

  Assert(pCvMatGetHeight(detectionsMat) = detections.Count, 'Error: detections Mat rows <> detections list count');
  case fMode of
  FRCompare: begin
      Assert((facesDatabase.Count>0), 'Error: faces database is empty');
      features:=CvMatAuto(pCvMat2dCreate(1,128,CV_32F)).AsPtr;
      for i:=0 to detections.Count-1 do
      begin
          extractFeatures(ocvimg,  detectionsMat, i, features);
          max_cos:=0;
          min_L2:=999;
          for faceRec in facesDatabase do
          begin
               cos_score:=pCvFaceRecognizerSFmatch(net, features, faceRec.faceFeatures, Ord(TCvFaceRecognizerSF_DisType.FR_COSINE));
               L2_score:=pCvFaceRecognizerSFmatch(net, features, faceRec.faceFeatures, Ord(TCvFaceRecognizerSF_DisType.FR_NORM_L2));
               if (cos_score >= FR_COS_THRESHOLD) and (L2_score <= FR_L2_NORM_THRESHOLD) then
               begin
                 if (cos_score > max_cos) and (L2_score < min_L2) then
                 begin
                    max_cos:=cos_score;
                    min_L2:=L2_score;
                    detections[i].classId:=i;
                    detections[i].className:=faceRec.faceName;
                    detections[i].confidence:=cos_score;
                    TFaceDetection(detections[i]).reconCosScore:=cos_score;
                    TFaceDetection(detections[i]).reconL2NormScore:=L2_score;
                 end;
               end;
          end;
      end;
  end;
  FRCreateDb: begin
      if (pCvMatGetHeight(detectionsMat)<1) then Exit;
      faceRec:=TFaceRecord.Create;
      faceRec.faceName:=ocvimg.Name;
      faceRec.faceFeatures:=nil;
      faceRec.faceFeatures:=pCvMatCreateEmpty;
      extractFeatures(ocvimg,  detectionsMat, 0, faceRec.faceFeatures);
      facesDatabase.Add(faceRec);
  end;
  end;
end;

procedure TOcvDNNFaceRecognizer.loadFeatures(const featuresFileName: string; const faceNamesList: string);
var
  fstorage: PCvFileStorage_t;
  cvstr:    CvString_t;
  pstr:     PCvString_t;
  fsmat:    PCvMat_t;
  fnode:    PCvFileNode_t;

  i: Integer;
  facesNames: TStringList;
  faceName  : AnsiString;
  facerec: TFaceRecord;
begin
  Assert(featuresFileName<>'', 'Error: faces feature file name is empty');
  Assert(faceNamesList<>'', 'Error: faces names file name is empty');

  fstorage:=nil;
  fnode:=nil;
  fstorage:=pCvFileStorageCreate();
  try
    facesNames:=TStringList.Create;
    facesNames.LoadFromFile(faceNamesList);

    facesDatabase.Clear;

    cvstr.pstr:=PAnsiChar(AnsiString(featuresFileName));
    pCvFileStorageopen(fstorage, @cvstr, Ord(TCvFileStorage_Mode._READ));


    for i:=0 to facesNames.Count-1 do
    begin
      faceName:=facesNames.ValueFromIndex[i];
      if faceName='' then Continue;
      fnode:=nil;
      fnode:=pCvFileStoragegetNode(fstorage, PAnsiChar(faceName));
      pstr:=pCvFileNodename(fnode);
      // name not found in faces file
      if pstr.pstr = '' then
           Continue;

      fsmat:=pCvFileNodemat(fnode);

      facerec:=TFaceRecord.Create;
      facerec.faceName:=faceName;
      facerec.faceFeatures:=fsmat;
      facesDatabase.Add(facerec)
    end;
    pCvFileStoragerelease(fstorage);

  finally
    if fstorage<> nil then
       pCvFileStorageDelete(fstorage);
    if fnode<>nil then
       pCvFileNodeDelete(fnode);
    pCvStringDelete(pstr);
    if Assigned(facesNames) then
        facesNames.Free;
  end;

end;

procedure TOcvDNNFaceRecognizer.saveFeatures(const featuresFileName: string);
var
  fstorage: PCvFileStorage_t;
  cvstr:    CvString_t;

  faceRec: TFaceRecord;
begin
  if facesDatabase.Count=0 then Exit;

  fstorage:=nil;
  fstorage:=pCvFileStorageCreate();
  try
    cvstr.pstr:=PAnsiChar(AnsiString(featuresFileName));
    pCvFileStorageopen(fstorage, @cvstr, Ord(TCvFileStorage_Mode._WRITE));

    for faceRec in facesDatabase do
    begin
        cvstr.pstr:=PAnsiChar(AnsiString(faceRec.faceName));
        pCvFileStoragewriteV4(fstorage, @cvstr, faceRec.faceFeatures);
    end;
    pCvFileStoragerelease(fstorage);
  finally
    if fstorage<>nil then
     pCvFileStorageDelete(fstorage);
  end;
end;

{$ENDREGION}

end.
