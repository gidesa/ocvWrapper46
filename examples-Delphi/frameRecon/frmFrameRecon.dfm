object fFrameRecon: TfFrameRecon
  Left = 26
  Top = 114
  Caption = 'Frame recon'
  ClientHeight = 609
  ClientWidth = 979
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
  object Image1: TImage
    Left = 648
    Top = 112
    Width = 320
    Height = 385
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 979
    Height = 105
    Align = alTop
    TabOrder = 0
    object Label1: TLabel
      Left = 152
      Top = 16
      Width = 145
      Height = 17
      AutoSize = False
      Caption = 'Canny/Threshold main parm.'
    end
    object Label2: TLabel
      Left = 152
      Top = 63
      Width = 146
      Height = 17
      AutoSize = False
      Caption = 'approx polygon epsilon'
    end
    object Label4: TLabel
      Left = 376
      Top = 63
      Width = 137
      Height = 25
      AutoSize = False
      Caption = 'max perim ratio difference % in approx polygon'
      WordWrap = True
    end
    object lbl4: TLabel
      Left = 152
      Top = 39
      Width = 145
      Height = 17
      AutoSize = False
      Caption = 'Other Canny parameters'
    end
    object btnStart: TButton
      Left = 48
      Top = 8
      Width = 89
      Height = 33
      Caption = 'Read image'
      TabOrder = 0
      OnClick = btnStartClick
    end
    object sePar1: TSpinEdit
      Left = 304
      Top = 8
      Width = 57
      Height = 22
      Enabled = False
      MaxValue = 0
      MinValue = 0
      TabOrder = 1
      Value = 100
    end
    object sePar2: TSpinEdit
      Left = 303
      Top = 35
      Width = 57
      Height = 22
      MaxValue = 0
      MinValue = 0
      TabOrder = 2
      Value = 50
    end
    object cbPar3: TComboBox
      Left = 375
      Top = 35
      Width = 41
      Height = 21
      Style = csDropDownList
      ItemIndex = 0
      TabOrder = 3
      Text = '3'
      Items.Strings = (
        '3'
        '5'
        '7')
    end
    object sePolyPar1: TSpinEdit
      Left = 304
      Top = 63
      Width = 57
      Height = 22
      MaxValue = 0
      MinValue = 0
      TabOrder = 4
      Value = 7
    end
    object sePerimRatioDiff: TSpinEdit
      Left = 528
      Top = 63
      Width = 57
      Height = 22
      MaxValue = 90
      MinValue = 5
      TabOrder = 5
      Value = 20
    end
    object cbCanny: TCheckBox
      Left = 512
      Top = 8
      Width = 105
      Height = 17
      Caption = 'Use Canny'
      Checked = True
      State = cbChecked
      TabOrder = 6
    end
    object cbDisplayCont: TCheckBox
      Left = 512
      Top = 40
      Width = 113
      Height = 17
      Caption = 'Display contours'
      TabOrder = 7
    end
    object btnSave: TButton
      Left = 648
      Top = 11
      Width = 129
      Height = 25
      Caption = 'Save mapped image'
      Enabled = False
      TabOrder = 8
      OnClick = btnSaveClick
    end
    object btnSaveProspMatrix: TButton
      Left = 648
      Top = 42
      Width = 129
      Height = 25
      Caption = 'Save prospective matrix'
      Enabled = False
      TabOrder = 9
      OnClick = btnSaveProspMatrixClick
    end
    object trckbrMainParm: TTrackBar
      Left = 367
      Top = 8
      Width = 139
      Height = 26
      Enabled = False
      Max = 255
      Frequency = 20
      TabOrder = 10
      OnChange = trckbrMainParmChange
    end
  end
  object Panel1: TPanel
    Left = 2
    Top = 111
    Width = 640
    Height = 490
    TabOrder = 1
    object imgCamera: TImage
      AlignWithMargins = True
      Left = 8
      Top = 8
      Width = 624
      Height = 474
      Margins.Left = 7
      Margins.Top = 7
      Margins.Right = 7
      Margins.Bottom = 7
      Align = alClient
      ExplicitLeft = 112
      ExplicitTop = 104
      ExplicitWidth = 105
      ExplicitHeight = 105
    end
  end
  object pnl1: TPanel
    Left = 648
    Top = 503
    Width = 323
    Height = 98
    TabOrder = 2
    object lbl1: TLabel
      Left = 24
      Top = 8
      Width = 98
      Height = 13
      AutoSize = False
      Caption = 'Square side (pixel)'
    end
    object lbl2: TLabel
      Left = 24
      Top = 67
      Width = 146
      Height = 29
      AutoSize = False
      Caption = 'Real side (mm). Used in saved params'
      WordWrap = True
    end
    object lbl3: TLabel
      Left = 24
      Top = 35
      Width = 146
      Height = 13
      AutoSize = False
      Caption = 'Square dist. from base Y (mm)'
    end
    object txSide: TEdit
      Left = 176
      Top = 0
      Width = 65
      Height = 21
      TabOrder = 0
    end
    object txRealSide: TEdit
      Left = 176
      Top = 67
      Width = 65
      Height = 21
      TabOrder = 1
    end
    object txDistFromBaseY: TEdit
      Left = 176
      Top = 27
      Width = 65
      Height = 21
      TabOrder = 2
    end
  end
  object dlgOpen1: TOpenDialog
    Left = 744
    Top = 416
  end
  object dlgSavePic1: TSavePictureDialog
    Filter = 
      'Portable Network Graphics (*.png)|*.png|JPEG Image File (*.jpg)|' +
      '*.jpg|Bitmaps (*.bmp)|*.bmp|TIFF Images (*.tiff)|*.tiff'
    Left = 808
    Top = 8
  end
  object dlgSaveMatrix: TSaveDialog
    Filter = 'OpenCV matrix|*.xml'
    Left = 808
    Top = 56
  end
end
