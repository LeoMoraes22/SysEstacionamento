inherited FrmCadastroConducao: TFrmCadastroConducao
  Caption = 'Cadastro de Condu'#231#227'o'
  ClientHeight = 179
  ClientWidth = 547
  ExplicitWidth = 553
  ExplicitHeight = 208
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 88
    Top = 24
    Width = 103
    Height = 13
    Caption = 'C'#243'digo da Condu'#231#227'o:'
    FocusControl = dbeCodigo
  end
  object Label2: TLabel [1]
    Left = 91
    Top = 51
    Width = 100
    Height = 13
    Caption = 'C'#243'digo do Condutor:'
    FocusControl = dbeCodigoCondutor
  end
  object Label3: TLabel [2]
    Left = 103
    Top = 78
    Width = 88
    Height = 13
    Caption = 'C'#243'digo do Ve'#237'culo:'
    FocusControl = dbeCodigoVeiculo
  end
  inherited tlbCadastroCRUD: TToolBar
    Top = 130
    Width = 547
  end
  object dbeCodigo: TDBEdit [4]
    Left = 197
    Top = 21
    Width = 134
    Height = 21
    DataField = 'CND_COD'
    DataSource = dtsPrincipal
    TabOrder = 1
    OnExit = EvPesquisaDiretaExit
  end
  object dbeCodigoCondutor: TDBEdit [5]
    Left = 197
    Top = 48
    Width = 134
    Height = 21
    DataField = 'CON_COD'
    DataSource = dtsPrincipal
    TabOrder = 2
  end
  object dbeCodigoVeiculo: TDBEdit [6]
    Left = 197
    Top = 75
    Width = 134
    Height = 21
    DataField = 'VEI_COD'
    DataSource = dtsPrincipal
    TabOrder = 3
  end
  inherited aclCadastroCRUD: TActionList
    Left = 432
    Top = 64
  end
  inherited imgHabilitada: TImageList
    Left = 432
    Top = 16
  end
  inherited imgDesabilitada: TImageList
    Left = 472
    Top = 16
  end
  inherited imgHot: TImageList
    Left = 512
    Top = 16
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryConducao
    Left = 480
    Top = 64
  end
end
