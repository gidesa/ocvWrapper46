object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Skeletonize an image'
  ClientHeight = 169
  ClientWidth = 394
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object lbl1: TLabel
    Left = 8
    Top = 64
    Width = 65
    Height = 13
    AutoSize = False
    Caption = 'Input image'
  end
  object btnStart: TButton
    Left = 136
    Top = 120
    Width = 121
    Height = 25
    Caption = 'Start'
    TabOrder = 0
    OnClick = btnStartClick
  end
  object txImg1: TEdit
    Left = 79
    Top = 56
    Width = 250
    Height = 21
    TabOrder = 1
  end
  object btnLoad1: TButton
    Left = 347
    Top = 56
    Width = 25
    Height = 25
    Caption = '...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = btnLoad1Click
  end
  object dlgOpen1: TOpenDialog
    Filter = 'Jpg|*.jpg|Png|*.png|Bmp|*.bmp|All files|*.*'
    Left = 328
    Top = 56
  end
end
