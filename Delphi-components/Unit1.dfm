object Form7: TForm7
  Left = 1097
  Top = 231
  Caption = 'Object and faces detection demo'
  ClientHeight = 698
  ClientWidth = 446
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  OnCloseQuery = FormCloseQuery
  PixelsPerInch = 96
  TextHeight = 13
  object img1: TImage
    Left = 256
    Top = 9
    Width = 161
    Height = 104
  end
  object img2: TImage
    Left = 24
    Top = 413
    Width = 393
    Height = 265
  end
  object img3: TImage
    Left = 24
    Top = 119
    Width = 393
    Height = 275
  end
  object btnbitStart: TBitBtn
    Left = 24
    Top = 80
    Width = 97
    Height = 33
    Caption = 'Start'
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 0
    OnClick = btnbitStartClick
  end
  object btnbitStop: TBitBtn
    Left = 153
    Top = 80
    Width = 97
    Height = 33
    Caption = 'Stop'
    Enabled = False
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 1
    OnClick = btnbitStopClick
  end
  object chkObjdet: TCheckBox
    Left = 24
    Top = 24
    Width = 97
    Height = 17
    Caption = 'Detect objects'
    Checked = True
    State = cbChecked
    TabOrder = 2
  end
  object chkFacedet: TCheckBox
    Left = 153
    Top = 24
    Width = 97
    Height = 17
    Caption = 'Detect faces'
    Checked = True
    State = cbChecked
    TabOrder = 3
  end
  object ocvcapt1: TOcvVideoCapture
    DisplayImage = img1
    Active = False
    VideoSourceType = vsCamera
    VideoSource = 0
    CameraProp.Height = 600
    CameraProp.Width = 800
    CameraProp.Brightness = 130
    CameraProp.Contrast = 5
    CameraProp.Gamma = -1
    CameraProp.FPS = 10
    CameraProp.WhiteBalance = -1
    CameraProp.AutoWhiteBalance = True
    Left = 288
    Top = 48
  end
  object ocvobjdet1: TOcvProcObjectDetector
    DisplayImage = img3
    VideoCapture = ocvcapt1
    ImagesBufferLength = 3
    ModelBinName = '..\..\..\Delphi-components\yolov4-tiny.weights'
    ModelConfigName = '..\..\..\Delphi-components\yolov4-tiny.cfg'
    ModelClassesName = '..\..\..\Delphi-components\yolo-tiny-coco-classes.txt'
    Threshold = 0.800000011920929000
    Left = 208
    Top = 272
  end
  object ocvfacedet1: TOcvProcFaceDetector
    DisplayImage = img2
    VideoCapture = ocvcapt1
    ImagesBufferLength = 3
    ModelBinName = '..\..\..\Delphi-components\face_detection_yunet_2022mar.onnx'
    ScoreThreshold = 0.899999976158142100
    NmsThreshold = 0.300000011920929000
    TopK = 5000
    Recognize = True
    ReconModelBinName = '..\..\face_recognition_sface_2021dec.onnx'
    ReconFacesNames = '..\..\..\Delphi-components\createFacesDB\facesImg\names.txt'
    ReconFeaturesName = '..\..\..\Delphi-components\createFacesDB\facesImg\facesDB.json'
    Left = 208
    Top = 504
  end
  object ocvimgdir1: TOcvImageDirectory
    DisplayImage = img1
    Ext = '.BMP;.JPG;.PNG'
    SlidePause = 2000
    Left = 360
    Top = 48
  end
end
