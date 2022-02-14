object Form6: TForm6
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1048#1085#1076#1080#1082#1072#1090#1086#1088#1099' '#1080#1085#1085#1086#1074#1072#1094#1080#1086#1085#1085#1086#1081' '#1076#1077#1103#1090#1077#1083#1100#1085#1086#1089#1090#1080
  ClientHeight = 804
  ClientWidth = 1108
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCloseQuery = FormCloseQuery
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object MediaPlayer1: TMediaPlayer
    Left = 48
    Top = 647
    Width = 253
    Height = 30
    AutoOpen = True
    DoubleBuffered = True
    Display = Panel1
    FileName = '3.mp4'
    Visible = False
    ParentDoubleBuffered = False
    TabOrder = 0
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1106
    Height = 689
    Caption = 'Panel1'
    TabOrder = 1
  end
  object Panel2: TPanel
    Left = 656
    Top = 496
    Width = 185
    Height = 41
    Caption = '2017'
    Color = 1775288
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWhite
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentBackground = False
    ParentFont = False
    TabOrder = 2
    OnClick = Panel2Click
  end
  object Panel3: TPanel
    Left = 808
    Top = 324
    Width = 185
    Height = 41
    Caption = '2016'
    Color = 1775288
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWhite
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentBackground = False
    ParentFont = False
    TabOrder = 3
    OnClick = Panel3Click
  end
  object Panel4: TPanel
    Left = 288
    Top = 496
    Width = 185
    Height = 41
    Caption = '2018'
    Color = 1775288
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWhite
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentBackground = False
    ParentFont = False
    TabOrder = 4
    OnClick = Panel4Click
  end
  object Panel5: TPanel
    Left = 488
    Top = 160
    Width = 185
    Height = 41
    Caption = '2015'
    Color = 1775288
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWhite
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentBackground = False
    ParentFont = False
    TabOrder = 5
    OnClick = Panel5Click
  end
  object Panel6: TPanel
    Left = 152
    Top = 324
    Width = 185
    Height = 41
    Caption = '2019'
    Color = 1775288
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWhite
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentBackground = False
    ParentFont = False
    TabOrder = 6
    OnClick = Panel6Click
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 440
    Top = 504
  end
end
