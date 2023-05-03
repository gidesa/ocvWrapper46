{ This unit contains classes encapsulating various Opencv functions
  and algorithms.
  ----------------------------------------------------------------------------
  Object detection: download Yolo V4 lite from:
  binary:
    https://github.com/AlexeyAB/darknet/releases/download/darknet_yolo_v4_pre/yolov4-tiny.weights
  config:
    https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/yolov4-tiny.cfg
  classes:
    https://raw.githubusercontent.com/AlexeyAB/darknet/master/cfg/coco.names
  ----------------------------------------------------------------------------
  Face Detection: Download face_detection_yunet_2022mar.onnx from
    https://github.com/opencv/opencv_zoo/tree/master/models/face_detection_yunet
  ----------------------------------------------------------------------------
  Face Reognition: Download face_recognition_sface_2021dec.onnx from
    https://github.com/opencv/opencv_zoo/tree/master/models/face_recognition_sface
  ----------------------------------------------------------------------------

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
{$IFDEF FPC}
  {$mode Delphi}
{$ENDIF}

{...$DEFINE DEBUGTIME}

unit unOpenCVDelphi46;

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
      OPENCVWrapper;

type

  TOCVImage = class
  private
    internImage: PCvMat_t;
    fullImage: PCvMat_t;
    fWidth: Integer;
    fHeight: Integer;
    fNchannels: Integer;
    fROI: TRect;
    fId: Integer;
    fName: string;

    function getImagePointer: PCvMat_t;
    procedure setROI(const ROI: TRect);
    function  getIsGray(): Boolean;

  protected
  public
          constructor Create(const width, height: Integer; const nchannels: integer); overload;
          constructor Create(const filename: string);  overload;
          constructor Create(const cvMatImg: PCvMat_t); overload;
          destructor Destroy(); override;
          procedure load(filename: string);
          procedure resetROI();
          procedure showInImage(formImg: TImage );
          procedure save(const filename: string);
          function  clone(const gray: Boolean = false; const fillZeros: Boolean = false): TOCVImage;
          procedure copy(const dest: TOcvImage);
          procedure toBmp(var bmp: TBitmap);
          procedure fromBmp(bmp: TBitmap);
          function resize(newWidth: Integer; newHeight: Integer): TOCVImage;
          procedure splitChannels(var channelsImg: TArray<TOCVImage>); overload;
          procedure splitChannels(const channelsImg: PCvvector_Mat); overload;
          procedure merge(const channelsImg: TArray<TOcvImage>); overload;
          procedure merge(const channelsImg: PCvvector_Mat); overload;

          property PCvMatPtr: PCvMat_t read getImagePointer;
          property ROI: TRect read fROI write setROI;
          property width: Integer read fWidth;
          property height: integer read fHeight;
          property nchannels: integer read fNchannels;
          property isGray: Boolean read getIsGray;
          property ID: Integer read FID write FID;
          property Name: String read FName write FName;
  end;

  TDetection = class
  public
    confidence: Double;
    classId:    Integer;
    className:  string;
    box    :    TRect;
    nsmValid:   Boolean;
    imageId:    Integer;

    procedure draw(const bmp: TBitmap; scaleX, scaleY: single); virtual;
  end;

  TFaceDetection = class(TDetection)
  public
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
    reconCosScore:     Single;
    reconL2NormScore:  Single;

    procedure draw(const bmp: TBitmap; scaleX, scaleY: single);  override;
  end;

  TFaceRecord = class
     faceName: string;
     faceFeatures: PCvMat_t;
  end;


  { Detection list cannot be an TObjectList, because detection objects
    must be deleted only AFTER being processed, that is programmatically
    and not in automated mode; instead TObjecList delete all objects when Clear-ed }
  TDetectionList = class(TList<TDetection>);

  IDNNDetection = interface
    procedure process(const ocvimg: TOCVImage; detections: TDetectionList);
  end;

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
    constructor Create(const modelBinName: string; const modelConfigName: string; const modelClassesName: string );
    destructor Destroy; override;
    procedure process(const ocvimg: TOCVImage; detections: TDetectionList);

    property threshold: single read fThreshold write setThreshold;
  end;

  TOcvFaceReconMode = (FRCreateDb, FRCompare);

  TOcvDNNFaceRecognizer = class
  private
    fModelBinName:     string;
    fModelConfigName:  string;
    fMode:             TOcvFaceReconMode;

    ptrnet: PCvPtr_FaceRecognizerSF;
    net:    PCvFaceRecognizerSF_t;

    facesDatabase: TObjectList<TFaceRecord>;

  public
    constructor Create(const modelBinName: string; const modelConfigName: string = '' );
    destructor Destroy; override;
    procedure process(const ocvimg: TOCVImage; const detectionsMat: PCvMat_t; detections: TDetectionList);
    procedure extractFeatures(const ocvimg: TOCVImage; const detectionMat: PCvMat_t;
                        rowind: Integer;  const features: PCvMat_t);
    procedure saveFeatures(const featuresFileName: string);  virtual;
    procedure loadFeatures(const featuresFileName: string; const faceNamesList: string);  virtual;

    property Mode: TOcvFaceReconMode read FMode write FMode;
  end;


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
  public
    constructor Create(const modelBinName: string; const modelConfigName: string = '' );
    destructor Destroy; override;
    procedure process(const ocvimg: TOCVImage; detections: TDetectionList);

    property ScoreThreshold: Single read FscoreThreshold write setScoreThreshold;
    property NmsThreshold: Single read FNmsThreshold write setNmsThreshold;
    property TopK: integer read FTopK write FTopK;

    property Recognize: boolean  read fRecognize write fRecognize;
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
{******************** TOCVImage ***********************************************}
{******************************************************************************}

{$REGION 'TOCVImage'}
constructor TOCVImage.Create(const width, height: Integer; const nchannels: integer);
var
  mt: Integer;
begin
  inherited Create;
  Assert((nchannels=1) or (nchannels=3),'Channels number must be 1, 2 or 3');
  case nchannels of
   1:  mt:=CV_8UC1;
   2:  mt:=CV_8UC2;
   3:  mt:=CV_8UC3;
  end;
  internImage:=pCvMatImageCreate(width, height, mt );
  fullImage:=internImage;
  fROI:= Rect(0,0,width, height);
  fWidth:=width;
  fHeight:=height;
  fNchannels:=nchannels;
  fId:=0;
  fName:='';
end;

constructor TOCVImage.Create(const filename: string);
begin
  inherited Create;
  internImage:=nil;
  load(filename);
end;

constructor TOCVImage.Create(const cvMatImg: PCvMat_t);
var
  w, h: Integer;
begin
  w:= pCvMatGetWidth(cvMatImg);
  h:= pCvMatGetHeight(cvMatImg);
  internImage:=nil;
  if w*h=0 then
  begin
    raise Exception.Create('TOCVImage.create: input PCvMat invalid');
  end;
  fROI:= Rect(0,0,w, h);
  fWidth:=w;
  fHeight:=h;
  fNchannels:=pCvMatGetChannels(cvMatImg);
  internImage:=cvMatImg;
  fullImage:=internImage;
  fId:=0;
  fName:='';
end;


destructor TOCVImage.Destroy;
begin
  if internImage<>nil then
  begin
      pCvMatDelete(internImage);
      internImage:=nil;
  end;
  inherited Destroy;
end;

function TOCVImage.getImagePointer(): PCvMat_t;
begin
  Result:=internImage;
end;

function TOCVImage.getIsGray(): Boolean;
begin
  Result:= (fNchannels = 1);
end;

procedure TOCVImage.setROI(const ROI: TRect);
var
  cvr: CvRectS;
begin
  if EqualRect(fROI, ROI) then Exit;
  if PtInRect(Rect(0,0,fWidth+1, fHeight+1), Point(ROI.Left, ROI.Top))
    and PtInRect(Rect(0,0,fWidth+1, fHeight+1), Point(ROI.Right, ROI.Bottom)) then
  begin
    fROI:=ROI;
    cvr.x:=ROI.Left;
    cvr.y:=ROI.Top;
    cvr.width:=ROI.Width;
    cvr.height:=ROI.Height;
    internImage:=pCvMatROI(internImage, @cvr);
  end;
end;

procedure TOCVImage.resetROI;
begin
  fROI:=Rect(0,0,fWidth, fHeight);
  if internImage<>fullImage then
  begin
      pCvMatDelete(internImage);
      internImage:=fullImage;
  end;
end;

procedure TOCVImage.showInImage(formImg: TImage);
var
  rec: TRect;
  bmp: TBitmap;
  colorImg: PCvMat_t;
begin
    bmp := TBitmap.Create;
    bmp.PixelFormat :=  pf24bit;
    resetROI;
    if fNchannels=1 then
    begin
      colorImg:=pCvMatImageCreate(fWidth, fHeight,  CV_8UC3);
      pCvCvtColor(internImage, colorImg, Ord(COLOR_GRAY2BGR));
      MatImage2Bitmap(colorImg, bmp);
      pCvMatDelete(colorImg);
    end
    else
    begin
      MatImage2Bitmap(internImage, bmp);
    end;
    rec := formImg.canvas.ClipRect;
    formImg.canvas.StretchDraw(rec , bmp);
    bmp.Free;
    setROI(fROI);
end;

procedure TOCVImage.load(filename: string);
var
  w, h: Integer;
  cvstr: CvString_t;
begin
  Assert(FileName<>'','File name empty');
  if internImage<>nil then
    pCvMatDelete(internImage);
  internImage:=nil;
  cvstr.pstr:= PAnsiChar(AnsiString(filename));
  internImage:=pCvimread(@cvstr, Ord(IMREAD_UNCHANGED));
  w:= pCvMatGetWidth(internImage);
  h:= pCvMatGetHeight(internImage);
  if w*h=0 then
  begin
    raise Exception.Create('TOCVImage.create: file '+filename+' not loaded');
    pCvMatDelete(internImage);
    internImage:=nil;
  end;

  fROI:= Rect(0,0,w, h);
  fWidth:=w;
  fHeight:=h;
  fNchannels:=pCvMatGetChannels(internImage);
  fullImage:=internImage;
end;

procedure TOCVImage.save(const filename: string);
var
  cvfname: CvString_t;
begin
  Assert(filename<>'', 'File name is empty');
  cvfname.pstr:= PAnsiChar(AnsiString(filename));
  pCvimwrite(@cvfname, internImage);
end;

function TOCVImage.clone(const gray: Boolean = False; const fillZeros: Boolean = false): TOCVImage;
var
  outImg: TOCVImage;
  sczero: PCvScalar_t;
begin
  if gray then
  begin
    outImg:=TOCVImage.Create(fWidth, fHeight, 1);
  end
  else
  begin
    outImg:=TOCVImage.Create(fWidth, fHeight, fNchannels);
  end;

  if not(fillZeros) then
  begin
    if (gray) and (fNchannels<>1) then
      pCvCvtColor(internImage, outImg.PCvMatPtr, Ord(COLOR_BGR2GRAY))
    else
    begin
      pCvMatCopy(internImage, outImg.PCvMatPtr);
    end;
  end
  else
  begin
     sczero:=CvScalar_(0,0,0,0);
     pCvMatFill(outImg.PCvMatPtr, sczero);
     pCvScalarDelete(sczero);
  end;
  Result:=outImg;
end;

procedure TOCVImage.copy(const dest: TOCVImage);
begin
  pCvMatCopy(internImage, dest.PCvMatPtr);
end;

function TOCVImage.resize(newWidth: Integer; newHeight: Integer): TOCVImage;
var
  outImg: TOCVImage;
  newsize: PCvSize_t;
begin
  outImg:=TOCVImage.Create(newWidth, newHeight, fNchannels);
  newsize:=CvSize_(newWidth, newHeight);
  pCvresize(internImage, outImg.PCvMatPtr, newsize);
  pCvSizeDelete(newsize);
  Result:=outImg;
end;

procedure TOCVImage.toBmp(var bmp: TBitmap);
begin
  MatImage2Bitmap(internImage, bmp);
end;

procedure TOCVImage.fromBmp(bmp: TBitmap);
begin
  Bitmap2MatImage(internImage, bmp);
end;

procedure TOCVImage.splitChannels(const channelsImg: PCvvector_Mat);
begin
  pCvsplit(internImage, channelsImg);
end;

procedure TOCVImage.splitChannels(var channelsImg: TArray<TOCVImage>);
var
  i: Integer;
  vecmat: PCvvector_Mat;
begin
  SetLength(channelsImg, 0);
  SetLength(channelsImg, fNchannels);
  vecmat:=pCvVectorMatCreate(fNchannels);
  splitChannels(vecmat);
  for i:=0 to fNchannels-1 do
  begin
    channelsImg[i]:=TOCVImage.Create(pCvVectorMatGet(vecmat, I));
  end;
  pCvVectorMatDelete(vecmat);
end;

procedure TOCVImage.merge(const channelsImg: PCvvector_Mat);
begin
  pCvmerge(channelsImg, internImage);
end;


procedure TOCVImage.merge(const channelsImg: TArray<TOCVImage>);
var
  i: Integer;
  vecmat: PCvvector_Mat;
begin
  vecmat:=pCvVectorMatCreate(Length(channelsImg));
  for i:=0 to High(channelsImg) do
    pCvVectorMatSet(vecmat, i, channelsImg[i].PCvMatPtr);
  merge(vecmat);
  pCvVectorMatDelete(vecmat);
end;

{$ENDREGION}

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
try
  classes:=TStringList.Create;
  classes.LoadFromFile(modelClassesName);

  modelBin.pstr := PAnsiChar(AnsiString(modelBinName));
  modelTxt.pstr :=PAnsiChar(AnsiString(modelConfigName));
  net:=nil;
  net := pCvdnn_readNet(@modelBin, @modelTxt);
  pCvdnn_NetsetPreferableBackend(net, Ord(DNN_BACKEND_OPENCV));
  pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_CPU));
  if (pCvocl_haveOpenCL()) then
  begin
      pCvocl_setUseOpenCL(True);
      pCvdnn_NetsetPreferableTarget(net, Ord(DNN_TARGET_OPENCL_FP16));
  end;
  outNames:=nil;
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
  begin
    pCvdnn_NetDelete(net);
    pCvVectorStringDelete(outNames);
    classes.Free;
  end;
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
    // detected objects and C is a number of classes + 4 where the first 4
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
  if img<>nil then
  begin
    pCvVectorRect2dDelete(vecBoxes);
    pCvVectorfloatDelete(vecScores);
    pCvVectorintDelete(vecNmsIndex);
    pCvVectorMatDelete(vecOut);


    pCvScalarDelete(mean);
    pCvSizeDelete(inpSize);
    pCvPointDelete(classIdPoint);
  end;
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
try
  modelBin.pstr := PAnsiChar(AnsiString(modelBinName));
  inpsize:=CvSize_(320, 320);
  fScoreThreshold:=0.9;
  fNmsThreshold:=0.3;
  fTopK:=5000;
  net:=nil;
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
  if (net<>nil) then
  begin
    pCvPtr_FaceDetectorYNDelete(ptrnet, net);
    pCvSizeDelete(inpsize);
  end;
  // delete internal face recognizer, if any
  if fFaceRecognizer<>nil then
    fFaceRecognizer.Free;
  inherited;
end;

procedure TOcvDNNFaceDetect.setScoreThreshold(val: Single);
begin
  if (0<val) and (val<=1.0) then
    fScoreThreshold:=val;
end;

procedure TOcvDNNFaceDetect.setNmsThreshold(val: Single);
begin
  if (0<val) and (val<=1.0) then
    fNmsThreshold:=val;
end;


procedure TOcvDNNFaceDetect.process(const ocvimg: TOCVImage;
                                       detections: TDetectionList);
var
  i:         Integer;

  img:       PCvMat_t;
  outmat:    PCvMat_t;
  w, h:           Integer;
  outH, outW:     Integer;
  detect:         TFaceDetection;

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
    inpSize:=CvSize_(w, h, inpSize);

    pCvFaceDetectorYNsetInputSize(net, inpsize);
    pCvFaceDetectorYNsetScoreThreshold(net, fScoreThreshold);
    pCvFaceDetectorYNsetNMSThreshold(net, fNmsThreshold);
    pCvFaceDetectorYNsetTopK(net, fTopK);


    // send image through the network
    outmat:=CvMatAuto(pCvMatCreateEmpty).AsPtr;

    pCvFaceDetectorYNdetect(net, img, outmat);




    // prepare detection results
    outW:=pCvMatGetWidth(outmat);
    outH:=pCvMatGetHeight(outmat);

    for i:=0 to  outH-1 do
    begin
        detect:=TFaceDetection.Create;

        detect.classId:=1;
        detect.className:='face';
        detect.imageId:=ocvimg.ID;
        detect.nsmValid:=True;

        detect.box.Left:=  Round(pCvMatGetFloat(outmat, i, 0));
        detect.box.Top:=   Round(pCvMatGetFloat(outmat, i, 1));
        detect.box.Width:= Round(pCvMatGetFloat(outmat, i, 2));
        detect.box.Height:=Round(pCvMatGetFloat(outmat, i, 3));
        detect.rightEyeX:=pCvMatGetFloat(outmat, i, 4);
        detect.rightEyeY:=pCvMatGetFloat(outmat, i, 5);
        detect.leftEyeX:=pCvMatGetFloat(outmat, i, 6);
        detect.leftEyeY:=pCvMatGetFloat(outmat, i, 7);
        detect.noseTipX:=pCvMatGetFloat(outmat, i, 8);
        detect.noseTipY:=pCvMatGetFloat(outmat, i, 9);
        detect.rightCornerMouthX:=pCvMatGetFloat(outmat, i,10);
        detect.rightCornerMouthY:=pCvMatGetFloat(outmat, i,11);
        detect.leftCornerMouthX:=pCvMatGetFloat(outmat, i,12);
        detect.leftCornerMouthY:=pCvMatGetFloat(outmat, i,13);
        detect.confidence := pCvMatGetFloat(outmat, i,14);

        detections.add(detect);
    end;
    if fRecognize then
    begin
      fFaceRecognizer.process(ocvimg, outmat, detections);
    end;

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
try
  modelBin.pstr := PAnsiChar(AnsiString(modelBinName));
  net:=nil;
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
  facesDatabase:=TObjectList<TFaceRecord>.Create;
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
  begin
    pCvPtr_FaceRecognizerSFDelete(ptrnet, net);
  end;
  for faceRec in facesDatabase do
    pCvMatDelete(faceRec.faceFeatures);

  facesDatabase.Free;
  inherited Destroy;
end;

procedure TOcvDNNFaceRecognizer.extractFeatures(const ocvimg: TOCVImage;
          const detectionMat: PCvMat_t; rowind: Integer; const features: PCvMat_t);
var
  firstRec: PCvMat_t;
  alignedImg: PCvMat_t;
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

  try
    facesNames:=TStringList.Create;
    facesNames.LoadFromFile(faceNamesList);

    facesDatabase.Clear;

    fstorage:=pCvFileStorageCreate();
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
    pCvFileStorageDelete(fstorage);
    pCvFileNodeDelete(fnode);
  finally
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

  fstorage:=pCvFileStorageCreate();
  cvstr.pstr:=PAnsiChar(AnsiString(featuresFileName));
  pCvFileStorageopen(fstorage, @cvstr, Ord(TCvFileStorage_Mode._WRITE));

  for faceRec in facesDatabase do
  begin
      cvstr.pstr:=PAnsiChar(AnsiString(faceRec.faceName));
      pCvFileStoragewriteV4(fstorage, @cvstr, faceRec.faceFeatures);
  end;
  pCvFileStoragerelease(fstorage);
  pCvFileStorageDelete(fstorage);
end;

{$ENDREGION}

end.
