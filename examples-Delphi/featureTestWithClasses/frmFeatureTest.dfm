object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Feature detector ORB test'
  ClientHeight = 197
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
    Left = 16
    Top = 16
    Width = 65
    Height = 13
    AutoSize = False
    Caption = 'First image'
  end
  object lbl2: TLabel
    Left = 16
    Top = 43
    Width = 73
    Height = 13
    AutoSize = False
    Caption = 'Second image'
  end
  object btnStart: TButton
    Left = 136
    Top = 136
    Width = 121
    Height = 25
    Caption = 'Detect features'
    TabOrder = 0
    OnClick = btnStartClick
  end
  object txImg1: TEdit
    Left = 87
    Top = 8
    Width = 250
    Height = 21
    TabOrder = 1
    Text = '..\..\datamat1.jpg'
  end
  object btnLoad1: TButton
    Left = 355
    Top = 8
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
  object txImg2: TEdit
    Left = 87
    Top = 35
    Width = 250
    Height = 21
    TabOrder = 3
    Text = '..\..\datamat2.jpg'
  end
  object btnLoad2: TButton
    Left = 355
    Top = 35
    Width = 25
    Height = 25
    Caption = '...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = btnLoad2Click
  end
  object dlgOpen1: TOpenDialog
    Filter = 'Jpg|*.jpg|Png|*.png|Bmp|*.bmp|All files|*.*'
    InitialDir = 'd:\'
    Left = 312
    Top = 88
  end
end
