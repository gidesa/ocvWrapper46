object Form6: TForm6
  Left = 787
  Top = 448
  Caption = 'QR Code  test'
  ClientHeight = 170
  ClientWidth = 421
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = True
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object lbl1: TLabel
    Left = 16
    Top = 80
    Width = 88
    Height = 16
    AutoSize = False
    Caption = 'Recognized code:'
    WordWrap = True
  end
  object lbQrcode: TLabel
    Left = 16
    Top = 104
    Width = 385
    Height = 48
    Alignment = taCenter
    AutoSize = False
    Caption = '...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    WordWrap = True
  end
  object lbl2: TLabel
    Left = 136
    Top = 48
    Width = 168
    Height = 16
    AutoSize = False
    Caption = 'For exit type C on image window'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object btnStart: TButton
    Left = 152
    Top = 16
    Width = 121
    Height = 25
    Caption = 'Start webcam capture'
    TabOrder = 0
    OnClick = btnStartClick
  end
end
