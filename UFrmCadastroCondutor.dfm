inherited FrmCadastroCondutor: TFrmCadastroCondutor
  Caption = 'Cadastro de Condutor'
  ClientHeight = 250
  ClientWidth = 550
  ExplicitWidth = 556
  ExplicitHeight = 279
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 73
    Top = 24
    Width = 37
    Height = 13
    Caption = 'C'#243'digo:'
  end
  object Label2: TLabel [1]
    Left = 73
    Top = 67
    Width = 31
    Height = 13
    Caption = 'Nome:'
  end
  object Label3: TLabel [2]
    Left = 73
    Top = 107
    Width = 25
    Height = 13
    Caption = 'CNH:'
  end
  object Label4: TLabel [3]
    Left = 73
    Top = 147
    Width = 23
    Height = 13
    Caption = 'CPF:'
  end
  inherited tlbCadastroCRUD: TToolBar
    Top = 201
    Width = 550
    ExplicitTop = 201
    ExplicitWidth = 550
  end
  object dbeCodigo: TDBEdit [5]
    Left = 132
    Top = 21
    Width = 94
    Height = 21
    DataField = 'CON_COD'
    DataSource = dtsPrincipal
    TabOrder = 1
    OnExit = EvPesquisaDiretaExit
  end
  object dbeNome: TDBEdit [6]
    Left = 132
    Top = 64
    Width = 158
    Height = 21
    DataField = 'CON_NOM'
    DataSource = dtsPrincipal
    TabOrder = 2
  end
  object dbeCNH: TDBEdit [7]
    Left = 132
    Top = 104
    Width = 158
    Height = 21
    DataField = 'CON_CNH'
    DataSource = dtsPrincipal
    MaxLength = 15
    TabOrder = 3
  end
  object dbeCPF: TDBEdit [8]
    Left = 132
    Top = 144
    Width = 158
    Height = 21
    DataField = 'CON_CPF'
    DataSource = dtsPrincipal
    MaxLength = 15
    TabOrder = 4
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryCondutor
  end
end
