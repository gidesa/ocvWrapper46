object fDigitsRecon: TfDigitsRecon
  Left = 0
  Top = 0
  Caption = 'Digits recognition'
  ClientHeight = 465
  ClientWidth = 440
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object pnl1: TPanel
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 434
    Height = 41
    Align = alTop
    TabOrder = 0
    object btnStart: TButton
      Left = 32
      Top = 8
      Width = 75
      Height = 25
      Caption = 'Train'
      TabOrder = 0
      OnClick = btnStartClick
    end
  end
  object pnl2: TPanel
    AlignWithMargins = True
    Left = 3
    Top = 50
    Width = 434
    Height = 412
    Align = alClient
    TabOrder = 1
    object pagectrl1: TPageControl
      AlignWithMargins = True
      Left = 4
      Top = 4
      Width = 426
      Height = 404
      ActivePage = tabsheetUserDigit
      Align = alClient
      Style = tsFlatButtons
      TabOrder = 0
      object tabsheetEvalRes: TTabSheet
        Caption = 'Messages'
        ExplicitLeft = 0
        ExplicitTop = 0
        ExplicitWidth = 0
        ExplicitHeight = 0
        object meRes: TMemo
          AlignWithMargins = True
          Left = 3
          Top = 3
          Width = 412
          Height = 367
          Align = alClient
          Font.Charset = ANSI_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Times New Roman'
          Font.Style = []
          ParentFont = False
          ScrollBars = ssVertical
          TabOrder = 0
        end
      end
      object tabsheetKNNTest: TTabSheet
        Caption = 'KNearest test results'
        ImageIndex = 1
        ExplicitLeft = 0
        ExplicitTop = 0
        ExplicitWidth = 0
        ExplicitHeight = 0
        object imgKNNTest: TImage
          AlignWithMargins = True
          Left = 3
          Top = 3
          Width = 412
          Height = 367
          Align = alClient
          ExplicitLeft = 32
          ExplicitTop = 32
          ExplicitWidth = 337
          ExplicitHeight = 201
        end
      end
      object tabsheetSVMTest: TTabSheet
        Caption = 'SVM test results'
        Enabled = False
        ImageIndex = 2
        ExplicitLeft = 0
        ExplicitTop = 0
        ExplicitWidth = 0
        ExplicitHeight = 0
        object imgSVMTest: TImage
          AlignWithMargins = True
          Left = 3
          Top = 3
          Width = 412
          Height = 367
          Align = alClient
          ExplicitLeft = 96
          ExplicitTop = 88
          ExplicitWidth = 105
          ExplicitHeight = 105
        end
      end
      object tabsheetUserDigit: TTabSheet
        Caption = 'User digit'
        ImageIndex = 3
        ExplicitLeft = 0
        ExplicitTop = 0
        ExplicitWidth = 0
        ExplicitHeight = 0
        object lblKNNRes: TLabel
          Left = 3
          Top = 216
          Width = 199
          Height = 13
          AutoSize = False
          Caption = 'KNN  Prediction'
        end
        object lblSVMRes: TLabel
          Left = 3
          Top = 248
          Width = 199
          Height = 13
          AutoSize = False
          Caption = 'SVM  Prediction'
        end
        object btnLoadDigit: TButton
          Left = 3
          Top = 20
          Width = 105
          Height = 25
          Caption = 'Load a digit image'
          TabOrder = 0
          OnClick = btnLoadDigitClick
        end
        object btnPredict: TButton
          Left = 3
          Top = 72
          Width = 105
          Height = 25
          Caption = 'Predict digit'
          Enabled = False
          TabOrder = 1
          OnClick = btnPredictClick
        end
        object pnl3: TPanel
          Left = 200
          Top = 3
          Width = 215
          Height = 207
          BevelInner = bvRaised
          TabOrder = 2
          object imgUserDigit: TImage
            AlignWithMargins = True
            Left = 7
            Top = 7
            Width = 201
            Height = 193
            Margins.Left = 5
            Margins.Top = 5
            Margins.Right = 5
            Margins.Bottom = 5
            Align = alClient
            ExplicitLeft = 14
            ExplicitTop = 27
            ExplicitWidth = 180
            ExplicitHeight = 180
          end
        end
        object pnl4: TPanel
          Left = 208
          Top = 235
          Width = 207
          Height = 62
          BevelInner = bvRaised
          Caption = 'Resized image'
          TabOrder = 3
          VerticalAlignment = taAlignTop
          object imgResized: TImage
            Left = 88
            Top = 24
            Width = 20
            Height = 20
          end
        end
      end
    end
  end
  object dlgOpen1: TOpenDialog
    Left = 152
    Top = 96
  end
end
