inherited FrmCadastroModelo: TFrmCadastroModelo
  Caption = 'Cadastro de Modelo'
  ClientHeight = 189
  ClientWidth = 554
  ExplicitWidth = 560
  ExplicitHeight = 218
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 94
    Top = 32
    Width = 37
    Height = 13
    Caption = '&C'#243'digo:'
    FocusControl = dbeCodigo
  end
  object Label2: TLabel [1]
    Left = 59
    Top = 107
    Width = 68
    Height = 13
    Caption = '&Nome Modelo:'
    FocusControl = dbeNomeModelo
  end
  object Label3: TLabel [2]
    Left = 71
    Top = 67
    Width = 56
    Height = 13
    Caption = '&Montadora:'
    FocusControl = dbeCodigoMontadora
  end
  inherited tlbCadastroCRUD: TToolBar
    Top = 140
    Width = 554
    ExplicitTop = 140
    ExplicitWidth = 554
  end
  object dbeCodigo: TDBEdit [4]
    Left = 133
    Top = 29
    Width = 76
    Height = 21
    DataField = 'MOD_COD'
    DataSource = dtsPrincipal
    TabOrder = 1
    OnExit = EvPesquisaDiretaExit
  end
  object dbeNomeModelo: TDBEdit [5]
    Left = 133
    Top = 104
    Width = 204
    Height = 21
    DataField = 'MOD_NOM'
    DataSource = dtsPrincipal
    TabOrder = 2
  end
  object dbeCodigoMontadora: TDBEdit [6]
    Left = 133
    Top = 64
    Width = 76
    Height = 21
    DataField = 'MON_COD'
    DataSource = dtsPrincipal
    TabOrder = 3
  end
  object dblkMontadora: TDBLookupComboBox [7]
    Left = 215
    Top = 64
    Width = 122
    Height = 21
    DataField = 'MON_COD'
    DataSource = dtsPrincipal
    KeyField = 'MON_COD'
    ListField = 'MON_NOM'
    ListSource = dtsMontadoraLK
    TabOrder = 4
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryModelo
  end
  object dtsMontadoraLK: TDataSource
    DataSet = qryMontadoraLK
    Left = 440
    Top = 48
  end
  object qryMontadoraLK: TFDQuery
    Active = True
    Connection = dtmEstacionamento.cnxEstacionamento
    SQL.Strings = (
      'select MON_COD, MON_NOM from MONTADORA'
      'order by MON_NOM')
    Left = 488
    Top = 8
  end
end
