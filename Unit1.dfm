object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 
    #1055#1088#1086#1075#1088#1072#1084#1084#1085#1086'-'#1094#1077#1083#1077#1074#1086#1081' '#1087#1086#1076#1093#1086#1076' '#1082' '#1084#1086#1076#1077#1083#1080#1088#1086#1074#1072#1085#1080#1102' '#1080' '#1091#1087#1088#1072#1074#1083#1077#1085#1080#1102' '#1080#1085#1085#1086#1074#1072#1094#1080#1086 +
    #1085#1085#1099#1084#1080' '#1101#1082#1086#1085#1086#1084#1080#1095#1077#1089#1082#1080#1084#1080' '#1084#1077#1079#1086#1089#1080#1089#1090#1077#1084#1072#1084#1080' '#1074' '#1091#1089#1083#1086#1074#1080#1103#1093' '#1083#1086#1082#1072#1083#1080#1079#1072#1094#1080#1080
  ClientHeight = 691
  ClientWidth = 1082
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1065
    Height = 641
    BevelOuter = bvNone
    Caption = 'Panel1'
    TabOrder = 0
  end
  object MediaPlayer1: TMediaPlayer
    Left = 48
    Top = 647
    Width = 253
    Height = 30
    AutoOpen = True
    DoubleBuffered = True
    Display = Panel1
    FileName = '1.mp4'
    Visible = False
    ParentDoubleBuffered = False
    TabOrder = 1
  end
  object Panel2: TPanel
    Left = 727
    Top = 280
    Width = 233
    Height = 105
    Color = 62194
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clPurple
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 2
    OnClick = Label1Click
    object Label1: TLabel
      Left = 1
      Top = 1
      Width = 212
      Height = 91
      Alignment = taCenter
      Caption = 
        #1050#1086#1084#1087#1083#1077#1082#1089#1085#1072#1103' '#1089#1077#1075#1084#1077#1085#1090#1085#1086'-'#1076#1077#1090#1077#1088#1084#1080#1085#1080#1088#1086#1074#1072#1085#1085#1072#1103' '#1084#1085#1086#1075#1086#1092#1072#1082#1090#1086#1088#1085#1072#1103' '#1084#1086#1076#1077#1083#1100' '#1092#1086 +
        #1088#1084#1080#1088#1086#1074#1072#1085#1080#1103' '#1080'  '#1088#1072#1079#1074#1080#1090#1080#1103' '#1080#1085#1085#1086#1074#1072#1094#1080#1086#1085#1085#1086#1075#1086' '#1087#1086#1090#1077#1085#1094#1080#1072#1083#1072' '#1101#1082#1086#1085#1086#1084#1080#1095#1077#1089#1082#1080#1093' '#1084 +
        #1077#1079#1086#1089#1080#1089#1090#1077#1084' '#1074' '#1091#1089#1083#1086#1074#1080#1103#1093' '#1083#1086#1082#1072#1083#1080#1079#1072#1094#1080#1080
      Font.Charset = ANSI_CHARSET
      Font.Color = 4718664
      Font.Height = -11
      Font.Name = 'Verdana'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
      OnClick = Label1Click
    end
  end
  object Panel3: TPanel
    Left = 152
    Top = 280
    Width = 233
    Height = 105
    Color = 62194
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clPurple
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
    object Label2: TLabel
      Left = 65
      Top = 32
      Width = 84
      Height = 26
      Alignment = taCenter
      Caption = #1057#1087#1088#1072#1074#1086#1095#1085#1072#1103' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1103
      Font.Charset = ANSI_CHARSET
      Font.Color = 4718664
      Font.Height = -11
      Font.Name = 'Verdana'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
      OnClick = Button1Click
    end
  end
  object Panel4: TPanel
    Left = 448
    Top = 280
    Width = 233
    Height = 105
    Color = 62194
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clPurple
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 4
    OnClick = Panel4Click
    object Label3: TLabel
      Left = 65
      Top = 32
      Width = 102
      Height = 39
      Alignment = taCenter
      Caption = #1048#1085#1076#1080#1082#1072#1090#1086#1088#1099' '#1080#1085#1085#1086#1074#1072#1094#1080#1086#1085#1085#1086#1081' '#1076#1077#1103#1090#1077#1083#1100#1085#1086#1089#1090#1080
      Font.Charset = ANSI_CHARSET
      Font.Color = 4718664
      Font.Height = -11
      Font.Name = 'Verdana'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
      OnClick = Label3Click
    end
  end
  object Panel5: TPanel
    Left = 848
    Top = 280
    Width = 233
    Height = 105
    Color = 62194
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clPurple
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentBackground = False
    ParentFont = False
    TabOrder = 5
    OnClick = Label4Click
    object Label4: TLabel
      Left = 65
      Top = 32
      Width = 103
      Height = 65
      Alignment = taCenter
      Caption = #1057#1090#1088#1072#1090#1077#1075#1080#1095#1077#1089#1082#1080#1077' '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1103' '#1088#1072#1079#1074#1080#1090#1080#1103' '#1101#1082#1086#1085#1086#1084#1080#1095#1077#1089#1082#1086#1081' '#1084#1077#1079#1086#1089#1080#1089#1090#1077#1084#1099
      Font.Charset = ANSI_CHARSET
      Font.Color = 4718664
      Font.Height = -11
      Font.Name = 'Verdana'
      Font.Style = [fsBold]
      ParentFont = False
      WordWrap = True
      OnClick = Label4Click
    end
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 440
    Top = 504
  end
end
