object settings: Tsettings
  Left = 673
  Top = 154
  BorderStyle = bsDialog
  Caption = #1053#1072#1089#1090#1088#1086#1081#1082#1080
  ClientHeight = 508
  ClientWidth = 481
  Color = clBtnFace
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -19
  Font.Name = 'Times New Roman'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 22
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 313
    Height = 22
    Caption = #1052#1072#1082#1089#1080#1084#1072#1083#1100#1085#1086#1077' '#1082#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1082#1083#1080#1082#1086#1074':'
  end
  object Label2: TLabel
    Left = 16
    Top = 56
    Width = 123
    Height = 22
    Caption = #1042#1099#1073#1086#1088' '#1082#1072#1088#1090#1099':'
  end
  object map_image: TImage
    Left = 8
    Top = 96
    Width = 457
    Height = 361
    Center = True
    Stretch = True
  end
  object clicks: TEdit
    Left = 344
    Top = 16
    Width = 121
    Height = 30
    TabOrder = 0
    Text = '100'
  end
  object maps: TComboBox
    Left = 168
    Top = 56
    Width = 297
    Height = 30
    ItemHeight = 22
    TabOrder = 1
    Text = #1042#1099#1073#1077#1088#1080#1090#1077' '#1082#1072#1088#1090#1091' '#1080#1079' '#1089#1087#1080#1089#1082#1072
    OnChange = mapsChange
    Items.Strings = (
      #1055#1088#1086#1093#1086#1088#1086#1074#1082#1072
      #1052#1072#1083#1080#1085#1086#1074#1082#1072
      #1058#1086#1087#1100
      #1051#1072#1089#1089#1074#1080#1083#1100)
  end
  object BitBtn1: TBitBtn
    Left = 208
    Top = 472
    Width = 75
    Height = 25
    TabOrder = 2
    Kind = bkOK
  end
end
