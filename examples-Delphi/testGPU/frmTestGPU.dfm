object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Test GPU acceleration'
  ClientHeight = 365
  ClientWidth = 598
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
  object btn1: TButton
    Left = 240
    Top = 32
    Width = 121
    Height = 25
    Caption = 'Start test'
    TabOrder = 0
    OnClick = btn1Click
  end
  object me1: TMemo
    Left = 24
    Top = 80
    Width = 545
    Height = 265
    ScrollBars = ssBoth
    TabOrder = 1
  end
end
