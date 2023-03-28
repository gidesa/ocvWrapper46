object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Cascade classifier test'
  ClientHeight = 122
  ClientWidth = 221
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
    Left = 32
    Top = 56
    Width = 153
    Height = 25
    AutoSize = False
    Caption = 'Type "C" to stop capture'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object btnStart: TButton
    Left = 48
    Top = 16
    Width = 121
    Height = 25
    Caption = 'Start webcam capture'
    TabOrder = 0
    OnClick = btnStartClick
  end
end
