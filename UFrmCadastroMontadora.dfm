inherited FrmCadastroMontadora: TFrmCadastroMontadora
  Caption = 'Cadastro De Montadora'
  ClientHeight = 175
  ClientWidth = 554
  ExplicitWidth = 560
  ExplicitHeight = 204
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 55
    Top = 24
    Width = 37
    Height = 13
    Caption = '&C'#243'digo:'
    FocusControl = dbeCodigo
  end
  object Label2: TLabel [1]
    Left = 62
    Top = 67
    Width = 31
    Height = 13
    Caption = '&Nome:'
    FocusControl = dbeNome
  end
  inherited tlbCadastroCRUD: TToolBar
    Top = 126
    Width = 554
    ExplicitTop = 126
    ExplicitWidth = 554
  end
  object dbeCodigo: TDBEdit [3]
    Left = 98
    Top = 21
    Width = 110
    Height = 21
    DataField = 'MON_COD'
    DataSource = dtsPrincipal
    TabOrder = 1
    OnExit = EvPesquisaDiretaExit
  end
  object dbeNome: TDBEdit [4]
    Left = 99
    Top = 64
    Width = 342
    Height = 21
    DataField = 'MON_NOM'
    DataSource = dtsPrincipal
    TabOrder = 2
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryMontadora
  end
end
