object Form4: TForm4
  Left = 433
  Top = 170
  Width = 586
  Height = 339
  BorderIcons = []
  BorderStyle = bsSizeToolWin
  Caption = 'tic tac toe'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Pole1: TImage
    Left = 8
    Top = 8
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole1Click
  end
  object pole2: TImage
    Left = 104
    Top = 8
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole2Click
  end
  object pole3: TImage
    Left = 200
    Top = 8
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole3Click
  end
  object pole4: TImage
    Left = 8
    Top = 104
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole4Click
  end
  object pole5: TImage
    Left = 104
    Top = 104
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole5Click
  end
  object pole6: TImage
    Left = 200
    Top = 104
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole6Click
  end
  object pole7: TImage
    Left = 8
    Top = 200
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole7Click
  end
  object pole8: TImage
    Left = 104
    Top = 200
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole8Click
  end
  object pole9: TImage
    Left = 200
    Top = 200
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole9Click
  end
  object Label1: TLabel
    Left = 352
    Top = 72
    Width = 155
    Height = 26
    Caption = 'Tura gracza: '
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'MS Reference Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Image1: TImage
    Left = 512
    Top = 72
    Width = 30
    Height = 30
  end
  object Button1: TButton
    Left = 368
    Top = 176
    Width = 129
    Height = 73
    Cursor = crHandPoint
    Caption = 'Od nowa'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Microsoft YaHei'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
  object Button2: TButton
    Left = 528
    Top = 0
    Width = 41
    Height = 41
    Cursor = crHandPoint
    Caption = 'X'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Microsoft YaHei UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
end
