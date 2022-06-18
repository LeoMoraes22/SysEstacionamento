inherited FrmCadastroTipo: TFrmCadastroTipo
  Caption = 'Cadastro de Tipo de Ve'#237'culo'
  ClientHeight = 180
  ClientWidth = 582
  ExplicitWidth = 588
  ExplicitHeight = 209
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 56
    Top = 27
    Width = 37
    Height = 13
    Caption = '&C'#243'digo:'
    FocusControl = dbeCodigo
  end
  object Label2: TLabel [1]
    Left = 55
    Top = 80
    Width = 50
    Height = 13
    Caption = '&Descri'#231#227'o:'
    FocusControl = dbeTipo
  end
  inherited tlbCadastroCRUD: TToolBar
    Top = 131
    Width = 582
    ExplicitTop = 131
    ExplicitWidth = 582
  end
  object dbeCodigo: TDBEdit [3]
    Left = 111
    Top = 24
    Width = 86
    Height = 21
    DataField = 'TIP_COD'
    DataSource = dtsPrincipal
    TabOrder = 1
    OnExit = EvPesquisaDiretaExit
  end
  object dbeTipo: TDBEdit [4]
    Left = 111
    Top = 77
    Width = 318
    Height = 21
    DataField = 'TIP_DES'
    DataSource = dtsPrincipal
    TabOrder = 2
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryTipo
  end
end
