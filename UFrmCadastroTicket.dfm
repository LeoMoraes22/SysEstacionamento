inherited FrmCadastroTicket: TFrmCadastroTicket
  Caption = 'Cadastro de Ticket'
  ClientHeight = 244
  ClientWidth = 541
  ExplicitWidth = 547
  ExplicitHeight = 273
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel [0]
    Left = 78
    Top = 21
    Width = 87
    Height = 13
    Caption = 'N'#250'mero do Ticket:'
    FocusControl = dbeCodigo
  end
  object Label2: TLabel [1]
    Left = 62
    Top = 51
    Width = 103
    Height = 13
    Caption = 'C'#243'digo da Condu'#231#227'o:'
    FocusControl = dbeCodigoConducao
  end
  object Label3: TLabel [2]
    Left = 138
    Top = 80
    Width = 27
    Height = 13
    Caption = 'Data:'
    FocusControl = dbeData
  end
  object Label4: TLabel [3]
    Left = 82
    Top = 107
    Width = 83
    Height = 13
    Caption = 'Hora de Entrada:'
    FocusControl = dbeHoraEntrada
  end
  object Label5: TLabel [4]
    Left = 94
    Top = 134
    Width = 71
    Height = 13
    Caption = 'Hora de Saida:'
    FocusControl = dbeHoraSaida
  end
  object Label6: TLabel [5]
    Left = 110
    Top = 162
    Width = 55
    Height = 13
    Caption = 'Valor Pago:'
    FocusControl = dbeValor
  end
  inherited tlbCadastroCRUD: TToolBar
    Top = 195
    Width = 541
    ExplicitTop = 195
    ExplicitWidth = 541
  end
  object dbeCodigo: TDBEdit [7]
    Left = 171
    Top = 18
    Width = 30
    Height = 21
    DataField = 'TIC_NUM'
    DataSource = dtsPrincipal
    TabOrder = 1
    OnExit = EvPesquisaDiretaExit
  end
  object dbeCodigoConducao: TDBEdit [8]
    Left = 171
    Top = 48
    Width = 30
    Height = 21
    DataField = 'CND_COD'
    DataSource = dtsPrincipal
    TabOrder = 2
  end
  object dbeData: TDBEdit [9]
    Left = 171
    Top = 74
    Width = 94
    Height = 21
    DataField = 'TIC_DAT'
    DataSource = dtsPrincipal
    MaxLength = 10
    TabOrder = 3
  end
  object dbeHoraEntrada: TDBEdit [10]
    Left = 171
    Top = 104
    Width = 94
    Height = 21
    DataField = 'TIC_HOR_ENT'
    DataSource = dtsPrincipal
    MaxLength = 5
    TabOrder = 4
  end
  object dbeHoraSaida: TDBEdit [11]
    Left = 171
    Top = 131
    Width = 94
    Height = 21
    DataField = 'TIC_HOR_SAI'
    DataSource = dtsPrincipal
    MaxLength = 5
    TabOrder = 5
  end
  object dbeValor: TDBEdit [12]
    Left = 171
    Top = 159
    Width = 62
    Height = 21
    DataField = 'TIC_VAL_PAG'
    DataSource = dtsPrincipal
    TabOrder = 6
  end
  inherited aclCadastroCRUD: TActionList
    Left = 480
    Top = 80
  end
  inherited imgHabilitada: TImageList
    Left = 352
    Top = 136
  end
  inherited imgDesabilitada: TImageList
    Left = 400
    Top = 136
  end
  inherited imgHot: TImageList
    Left = 448
    Top = 136
  end
  inherited dtsPrincipal: TDataSource
    DataSet = dtmEstacionamento.qryTicket
    Left = 488
    Top = 128
  end
end
