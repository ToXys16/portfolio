object Form2: TForm2
  Left = 624
  Top = 233
  Width = 251
  Height = 356
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSizeToolWin
  Caption = 'O Programie'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 40
    Width = 161
    Height = 185
    AutoSize = False
    Caption = 
      'to jest notatnik zrobiony na potrzeby kursu w celach edukacyjnyc' +
      'h'
    Font.Charset = ANSI_CHARSET
    Font.Color = clGray
    Font.Height = -15
    Font.Name = 'MV Boli'
    Font.Style = [fsBold, fsUnderline]
    ParentFont = False
    WordWrap = True
  end
  object Button1: TButton
    Left = 72
    Top = 256
    Width = 91
    Height = 41
    Caption = 'OK'
    TabOrder = 0
    OnClick = Button1Click
  end
end
