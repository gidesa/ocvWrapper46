// JCL_DEBUG_EXPERT_GENERATEJDBG OFF
// JCL_DEBUG_EXPERT_INSERTJDBG OFF
// JCL_DEBUG_EXPERT_DELETEMAPFILE OFF
program createFacesDB;

{$APPTYPE CONSOLE}

{$R *.res}

uses
  System.Classes,   System.SysUtils, unOCVImage,  unOpenCVDelphi46, System.IOUtils,
  unFileIterator;
type
  TFaceProcess = class(TFileIteratorBase)
  public
    function processFile(filename: string): Boolean; override;
  end;

var
  faceDet: TOcvDNNFaceDetect;
  faceRec: TOcvDNNFaceRecognizer;
  facesNames: TStringList;

  fileIter: TFileIterator;
  faceProc: TFaceProcess;

  modelDir: string;
  imgDir: string;

const
  DET_MODEL_BIN = 'face_detection_yunet_2022mar.onnx';
  RECON_MODEL_BIN = 'face_recognition_sface_2021dec.onnx';

function TFaceProcess.processFile(filename: string): Boolean;
var
  ocvimg: TOCVImage;
  detections: TDetectionList;
  det: TDetection;
begin
  ocvimg:=TOCVImage.Create(filename);
  ocvimg.ID:=fileNumProgr;
  ocvimg.Name:=facesNames.Values[ExtractFileName(filename)];
  detections:=TDetectionList.Create;
  faceDet.process(ocvimg, detections);
  ocvimg.Free;
  for det in detections do
    det.Free;

  detections.Free;
  Result:=True;
end;

{-----------------------------------------------------------------------------}
begin
  try
    if ParamCount<4 then
    begin
      Writeln('Usage:');
      Writeln('createFacesDB <models directory> <faces images directory> <faces names list file> <saved faces db name>');
      Writeln('Faces names list contains rows of the form:   <img file name>=<name>  For example:');
      Writeln('  img1.jpg=John');
      Writeln('  img2.jpg=Jennifer');
      Halt(99);
    end;
    modelDir:= IncludeTrailingPathDelimiter(ParamStr(1));

    faceDet:=TOcvDNNFaceDetect.Create(modelDir+DET_MODEL_BIN, '');
    faceRec:=TOcvDNNFaceRecognizer.Create(modelDir+RECON_MODEL_BIN);
    faceRec.Mode:=FRCreateDb;
    faceDet.Recognize:=True;
    faceDet.FaceRecognizer:=faceRec;

    imgDir:=IncludeTrailingPathDelimiter(ParamStr(2));
    fileIter:=TFileIterator.Create(imgDir);
    faceProc:=TFaceProcess.Create;
    fileIter.setObjFunc(faceProc);

    facesNames:=TStringList.Create;
    facesNames.LoadFromFile(ParamStr(3));

    fileIter.process;

    faceRec.saveFeatures(ParamStr(4));

    // faceDetector destroy also recognizer, if any
    faceDet.Free;
    faceProc.Free;
    fileIter.Free;
  except
    on E: Exception do
      Writeln(E.ClassName, ': ', E.Message);
  end;
end.
