object Form1: TForm1
  Left = 455
  Top = 179
  Width = 582
  Height = 521
  Caption = 'notatniczek'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = OnClose
  PixelsPerInch = 96
  TextHeight = 13
  object Tresc: TMemo
    Left = 0
    Top = 0
    Width = 566
    Height = 462
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = OnKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 512
    object Pliczek1: TMenuItem
      Caption = '|&Pliczek|'
      object Nowy1: TMenuItem
        Caption = '&Nowy'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Otwrz1: TMenuItem
        Caption = '&Otw'#243'rz'
        OnClick = Otwrz1Click
      end
      object Zapisz1: TMenuItem
        Caption = '&Zapisz    Ctrl+S'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapisz &jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'&cz'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = '|&Edycja|'
      object N3: TMenuItem
        Caption = '-'
      end
      object Wytnij1: TMenuItem
        Caption = 'W&ytnij     Ctrl+X'
        OnClick = Wytnij1Click
      end
      object KopjujCtrlc1: TMenuItem
        Caption = '&Kopjuj     Ctrl+c'
        OnClick = KopjujCtrlc1Click
      end
      object WklejCtrlV1: TMenuItem
        Caption = '&Wklej       Ctrl+V'
        OnClick = WklejCtrlV1Click
      end
      object N4: TMenuItem
        Caption = '-'
      end
    end
    object Format1: TMenuItem
      Caption = '|&Format|'
      object Zawijaniewierszy1: TMenuItem
        Caption = 'Z&awijanie wierszy'
        Checked = True
        OnClick = Zawijaniewierszy1Click
      end
      object czcionka1: TMenuItem
        Caption = '&czcionka'
        OnClick = czcionka1Click
      end
    end
    object Help1: TMenuItem
      Caption = '|!|&Help|!|'
      object N5: TMenuItem
        Caption = '-'
      end
      object Informacje1: TMenuItem
        Caption = '&Informacje'
        object ZapraszamnakursC1: TMenuItem
          Caption = 'Zapraszam na kurs C++ z kturego sie uczy'#322'em'
          OnClick = ZapraszamnakursC1Click
        end
        object Oprogramie1: TMenuItem
          Caption = 'O programie'
          OnClick = Oprogramie1Click
        end
        object OAutorze1: TMenuItem
          Caption = 'O Autorze'
          OnClick = OAutorze1Click
        end
      end
    end
    object MiniGry1: TMenuItem
      Caption = 'Funkcje dodatkowe'
      object co1: TMenuItem
        Caption = 'gry'
        object tictactoe1: TMenuItem
          Caption = 'tic tac toe'
          OnClick = tictactoe1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Pliki tekstowe(.txt)|*.txt|Wszystkie Pliki *_*|*.*'
    Left = 512
    Top = 32
  end
  object SaveDialog1: TSaveDialog
    Filter = 
      'Plik Textowy (.txt)|*.txt|Plik Batch (.bat)|*.bat|Plik C++ (.cpp' +
      ')|*.cpp|Pszystkie Pliki (*-*)|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 512
    Top = 64
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 512
    Top = 96
  end
end
