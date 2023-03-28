object fCamShiftDemo: TfCamShiftDemo
  Left = 254
  Top = 55
  Caption = 'CAMshift demo'
  ClientHeight = 589
  ClientWidth = 630
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -10
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 630
    Height = 118
    Align = alTop
    TabOrder = 0
    object Label1: TLabel
      Left = 20
      Top = 20
      Width = 30
      Height = 16
      Caption = 'Vmin'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label2: TLabel
      Left = 20
      Top = 52
      Width = 34
      Height = 16
      Caption = 'Vmax'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 20
      Top = 89
      Width = 30
      Height = 16
      Caption = 'Smin'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
    end
    object tbVmin: TTrackBar
      Left = 65
      Top = 20
      Width = 287
      Height = 20
      Max = 256
      PageSize = 8
      Frequency = 16
      TabOrder = 0
    end
    object tbVmax: TTrackBar
      Left = 65
      Top = 52
      Width = 287
      Height = 20
      Max = 256
      PageSize = 8
      Frequency = 16
      TabOrder = 1
    end
    object tbSmin: TTrackBar
      Left = 65
      Top = 85
      Width = 287
      Height = 20
      Max = 256
      PageSize = 8
      Frequency = 16
      TabOrder = 2
    end
    object btnStart: TButton
      Left = 416
      Top = 70
      Width = 75
      Height = 25
      Caption = 'Start'
      TabOrder = 3
      OnClick = btnStartClick
    end
    object btnHelp: TButton
      Left = 576
      Top = 11
      Width = 33
      Height = 33
      Caption = '?'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 4
      OnClick = btnHelpClick
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 118
    Width = 630
    Height = 471
    Align = alClient
    TabOrder = 1
    object formImage: TImage
      Left = 20
      Top = 16
      Width = 589
      Height = 433
      Stretch = True
      OnMouseDown = formImageMouseDown
      OnMouseMove = formImageMouseMove
      OnMouseUp = formImageMouseUp
    end
    object me1: TMemo
      Left = 144
      Top = 128
      Width = 347
      Height = 177
      BevelKind = bkSoft
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      Visible = False
    end
  end
end
