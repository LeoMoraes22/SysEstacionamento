inherited FrmCadastroVeiculo: TFrmCadastroVeiculo
  Caption = 'Cadastro de Ve'#237'culo'
  ClientHeight = 256
  ClientWidth = 550
  OnShow = EvFiltrarModelosShow
  ExplicitWidth = 556
  ExplicitHeight = 285
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 96
    Top = 16
    Width = 37
    Height = 13
    Caption = '&C'#243'digo:'
    FocusControl = dbeCodigo
  end
  object Label2: TLabel [1]
    Left = 51
    Top = 48
    Width = 82
    Height = 13
    Caption = 'Cod. Montadora:'
    FocusControl = dbeCodMontadora
  end
  object Label3: TLabel [2]
    Left = 69
    Top = 83
    Width = 64
    Height = 13
    Caption = 'Cod. Modelo:'
    FocusControl = dbeCodigoModelo
  end
  object Label4: TLabel [3]
    Left = 83
    Top = 110
    Width = 50
    Height = 13
    Caption = 'Cod. Tipo:'
    FocusControl = dbeCodigoTipo
  end
  object Label5: TLabel [4]
    Left = 53
    Top = 142
    Width = 80
    Height = 13
    Caption = '&Placa do Veiculo:'
    FocusControl = dbePlacaVeiculo
  end
  object Label6: TLabel [5]
    Left = 55
    Top = 164
    Width = 81
    Height = 13
    Caption = '&Ano Fabrica'#231#227'o: '
    FocusControl = dbeAnoFabricacao
  end
  inherited tlbCadastroCRUD: TToolBar
    Top = 207
    Width = 550
    ExplicitTop = 207
    ExplicitWidth = 550
  end
  object dbeCodigo: TDBEdit [7]
    Left = 139
    Top = 8
    Width = 38
    Height = 21
    DataField = 'VEI_COD'
    DataSource = dtsPrincipal
    TabOrder = 1
    OnExit = EvPesquisaDiretaExit
  end
  object dbeCodMontadora: TDBEdit [8]
    Left = 139
    Top = 45
    Width = 38
    Height = 21
    DataField = 'MON_COD'
    DataSource = dtsPrincipal
    TabOrder = 2
    OnExit = EvFiltrarModeloExit
  end
  object dbeCodigoModelo: TDBEdit [9]
    Left = 139
    Top = 80
    Width = 38
    Height = 21
    DataField = 'MOD_COD'
    DataSource = dtsPrincipal
    TabOrder = 4
  end
  object dbeCodigoTipo: TDBEdit [10]
    Left = 139
    Top = 107
    Width = 38
    Height = 21
    DataField = 'TIP_COD'
    DataSource = dtsPrincipal
    TabOrder = 6
  end
  object dbePlacaVeiculo: TDBEdit [11]
    Left = 139
    Top = 134
    Width = 62
    Height = 21
    DataField = 'VEI_PLA'
    DataSource = dtsPrincipal
    TabOrder = 8
  end
  object dbeAnoFabricacao: TDBEdit [12]
    Left = 138
    Top = 161
    Width = 63
    Height = 21
    DataField = 'VEI_ANO_FAB'
    DataSource = dtsPrincipal
    TabOrder = 9
  end
  object dblkMontadora: TDBLookupComboBox [13]
    Left = 183
    Top = 45
    Width = 145
    Height = 21
    DataField = 'MON_COD'
    DataSource = dtsPrincipal
    KeyField = 'MON_COD'
    ListField = 'MON_NOM'
    ListSource = dtsMontadoraLK
    TabOrder = 3
    OnCloseUp = EvFiltrarModelosCloseUp
  end
  object dblkModelo: TDBLookupComboBox [14]
    Left = 183
    Top = 80
    Width = 145
    Height = 21
    DataField = 'MOD_COD'
    DataSource = dtsPrincipal
    KeyField = 'MOD_COD'
    ListField = 'MOD_NOM'
    ListSource = dtsModeloLK
    TabOrder = 5
  end
  object dblkTipo: TDBLookupComboBox [15]
    Left = 183
    Top = 107
    Width = 145
    Height = 21
    DataField = 'TIP_COD'
    DataSource = dtsPrincipal
    KeyField = 'TIP_COD'
    ListField = 'TIP_DES'
    ListSource = dtsTipoLK
    TabOrder = 7
  end
  object DBNavigator1: TDBNavigator [16]
    Left = 246
    Top = 176
    Width = 240
    Height = 25
    DataSource = dtsPrincipal
    TabOrder = 10
    OnClick = EvAtualizaModeloClick
  end
  inherited aclCadastroCRUD: TActionList
    Left = 8
    Top = 72
  end
  inherited imgHabilitada: TImageList
    Left = 360
    Top = 16
  end
  inherited imgDesabilitada: TImageList
    Left = 360
    Top = 64
  end
  inherited imgHot: TImageList
    Left = 360
    Top = 112
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryVeiculo
    Left = 8
    Top = 16
  end
  object dtsMontadoraLK: TDataSource
    DataSet = qryMontadoraLK
    Left = 488
    Top = 8
  end
  object qryMontadoraLK: TFDQuery
    Active = True
    Connection = dtmEstacionamento.cnxEstacionamento
    SQL.Strings = (
      'select MON_COD, MON_NOM from MONTADORA')
    Left = 432
    Top = 8
  end
  object dtsModeloLK: TDataSource
    DataSet = qryModeloLK
    Left = 488
    Top = 64
  end
  object qryModeloLK: TFDQuery
    Active = True
    Connection = dtmEstacionamento.cnxEstacionamento
    SQL.Strings = (
      'select MOD_COD,MON_COD, MOD_NOM from MODELO'
      'WHERE MON_COD = :MON_COD'
      'ORDER BY MOD_NOM')
    Left = 432
    Top = 64
    ParamData = <
      item
        Name = 'MON_COD'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
  end
  object dtsTipoLK: TDataSource
    DataSet = qryTipoLK
    Left = 496
    Top = 120
  end
  object qryTipoLK: TFDQuery
    Active = True
    AggregatesActive = True
    Connection = dtmEstacionamento.cnxEstacionamento
    SQL.Strings = (
      'select TIP_COD, TIP_DES from TIPO')
    Left = 432
    Top = 120
  end
end
