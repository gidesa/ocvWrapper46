object fVideoWrite: TfVideoWrite
  Left = 0
  Top = 0
  Caption = 'Video write example'
  ClientHeight = 413
  ClientWidth = 319
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object img1: TImage
    Left = 24
    Top = 204
    Width = 273
    Height = 201
  end
  object lbl1: TLabel
    Left = 32
    Top = 88
    Width = 30
    Height = 13
    Caption = 'Codec'
  end
  object lbl2: TLabel
    Left = 32
    Top = 120
    Width = 41
    Height = 13
    Caption = 'File type'
  end
  object lbl3: TLabel
    Left = 24
    Top = 147
    Width = 273
    Height = 39
    AutoSize = False
    Caption = 
      'NOTE: H264 codec require that the library "openh264-1.8.0-win32.' +
      'dll" will be in application binary directory, or in path '
    WordWrap = True
  end
  object btnStart: TButton
    Left = 24
    Top = 16
    Width = 57
    Height = 25
    Caption = 'Start'
    TabOrder = 0
    OnClick = btnStartClick
  end
  object btnStop: TButton
    Left = 240
    Top = 16
    Width = 57
    Height = 25
    Caption = 'Stop'
    Enabled = False
    TabOrder = 1
    OnClick = btnStopClick
  end
  object cbCodec: TComboBox
    Left = 96
    Top = 85
    Width = 121
    Height = 21
    Style = csDropDownList
    TabOrder = 2
  end
  object cbType: TComboBox
    Left = 96
    Top = 120
    Width = 121
    Height = 21
    Style = csDropDownList
    ItemIndex = 0
    TabOrder = 3
    Text = 'AVI'
    Items.Strings = (
      'AVI'
      'MP4')
  end
  object ocvcapt1: TOcvVideoCapture
    DisplayImage = img1
    Active = False
    VideoSourceType = vsCamera
    VideoSource = 0
    CameraProp.Height = 480
    CameraProp.Width = 640
    CameraProp.Brightness = 100
    CameraProp.Contrast = 5
    CameraProp.Gamma = 100
    CameraProp.FPS = 15
    CameraProp.WhiteBalance = 4500
    CameraProp.AutoWhiteBalance = False
    Left = 136
    Top = 16
  end
  object ocvmoviewrite1: TOcvProcMovieWrite
    VideoCapture = ocvcapt1
    ImagesBufferLength = 20
    fourccCodec = vcMJPG
    Fps = 15
    frameWidth = 640
    frameHeight = 480
    Left = 256
    Top = 80
  end
end
