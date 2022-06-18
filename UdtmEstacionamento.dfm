object dtmEstacionamento: TdtmEstacionamento
  OldCreateOrder = False
  Height = 496
  Width = 595
  object cnxEstacionamento: TFDConnection
    Params.Strings = (
      'ConnectionDef=EstacionamentoDB')
    Connected = True
    LoginPrompt = False
    Left = 40
    Top = 24
  end
  object PhysFBDriver: TFDPhysFBDriverLink
    Left = 248
    Top = 24
  end
  object WaitCursor: TFDGUIxWaitCursor
    Provider = 'Forms'
    Left = 144
    Top = 24
  end
  object qryMontadora: TFDQuery
    Active = True
    Connection = cnxEstacionamento
    SQL.Strings = (
      'select MON_COD, MON_NOM from MONTADORA'
      'where '
      '  MON_COD = :MONTADORAPK')
    Left = 24
    Top = 104
    ParamData = <
      item
        Name = 'MONTADORAPK'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
    object qryMontadoraMON_COD: TIntegerField
      DisplayLabel = 'C'#243'digo'
      FieldName = 'MON_COD'
      Origin = 'MON_COD'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      MaxValue = 2000000000
      MinValue = 1
    end
    object qryMontadoraMON_NOM: TStringField
      DisplayLabel = 'Nome'
      FieldName = 'MON_NOM'
      Origin = 'MON_NOM'
      Required = True
      Size = 60
    end
  end
  object qryTipo: TFDQuery
    Active = True
    Connection = cnxEstacionamento
    SQL.Strings = (
      'select TIP_COD, TIP_DES from TIPO'
      'where '
      '  TIP_COD = :TIPOPK')
    Left = 24
    Top = 168
    ParamData = <
      item
        Name = 'TIPOPK'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
    object qryTipoTIP_COD: TIntegerField
      DisplayLabel = 'C'#243'digo'
      FieldName = 'TIP_COD'
      Origin = 'TIP_COD'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      MaxValue = 2000000000
      MinValue = 1
    end
    object qryTipoTIP_DES: TStringField
      DisplayLabel = 'Descri'#231#227'o'
      FieldName = 'TIP_DES'
      Origin = 'TIP_DES'
      Required = True
    end
  end
  object qryCondutor: TFDQuery
    Active = True
    Connection = cnxEstacionamento
    SQL.Strings = (
      'select CON_COD, CON_NOM, CON_CNH, CON_CPF from CONDUTOR'
      'where '
      '  CON_COD = :CONDUTORPK')
    Left = 32
    Top = 232
    ParamData = <
      item
        Name = 'CONDUTORPK'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
    object qryCondutorCON_COD: TIntegerField
      DisplayLabel = 'C'#243'digo'
      FieldName = 'CON_COD'
      Origin = 'CON_COD'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      MaxValue = 2000000000
      MinValue = 1
    end
    object qryCondutorCON_NOM: TStringField
      DisplayLabel = 'Nome'
      FieldName = 'CON_NOM'
      Origin = 'CON_NOM'
      ProviderFlags = [pfInUpdate]
      Required = True
      Size = 60
    end
    object qryCondutorCON_CNH: TStringField
      DisplayLabel = 'CNH'
      FieldName = 'CON_CNH'
      Origin = 'CON_CNH'
      ProviderFlags = [pfInUpdate]
      EditMask = '999999999999999;0;_'
      Size = 15
    end
    object qryCondutorCON_CPF: TStringField
      DisplayLabel = 'CPF'
      FieldName = 'CON_CPF'
      Origin = 'CON_CPF'
      ProviderFlags = [pfInUpdate]
      Required = True
      EditMask = '000.000.000.-00;1;'
      FixedChar = True
      Size = 14
    end
  end
  object qryModelo: TFDQuery
    Active = True
    Connection = cnxEstacionamento
    SQL.Strings = (
      'SELECT MOD_COD, MON_COD, MOD_NOM FROM MODELO '
      'where '
      '  MOD_COD = :MODELOPK')
    Left = 24
    Top = 296
    ParamData = <
      item
        Name = 'MODELOPK'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
    object qryModeloMOD_COD: TIntegerField
      DisplayLabel = 'C'#243'digo'
      FieldName = 'MOD_COD'
      Origin = 'MOD_COD'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object qryModeloMOD_NOM: TStringField
      DisplayLabel = 'Nome Montadora'
      FieldName = 'MOD_NOM'
      Origin = 'MOD_NOM'
      Required = True
      Size = 60
    end
    object qryModeloMON_COD: TIntegerField
      DisplayLabel = 'C'#243'digo Montadora:'
      FieldName = 'MON_COD'
      Origin = 'MON_COD'
      Required = True
    end
  end
  object qryVeiculo: TFDQuery
    Active = True
    Connection = cnxEstacionamento
    SQL.Strings = (
      'SELECT VEI_COD, MON_COD, MOD_COD, TIP_COD, VEI_PLA, VEI_ANO_FAB'
      'FROM VEICULO '
      'where '
      '  VEI_COD = :VEICULOPK')
    Left = 24
    Top = 360
    ParamData = <
      item
        Name = 'VEICULOPK'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
    object qryVeiculoVEI_COD: TIntegerField
      DisplayLabel = 'C'#243'digo:'
      FieldName = 'VEI_COD'
      Origin = 'VEI_COD'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object qryVeiculoMON_COD: TIntegerField
      DisplayLabel = 'Cod. Montadora:'
      FieldName = 'MON_COD'
      Origin = 'MON_COD'
      Required = True
    end
    object qryVeiculoMOD_COD: TIntegerField
      DisplayLabel = 'Cod. Modelo:'
      FieldName = 'MOD_COD'
      Origin = 'MOD_COD'
      Required = True
    end
    object qryVeiculoTIP_COD: TIntegerField
      DisplayLabel = 'Cod. Tipo:'
      FieldName = 'TIP_COD'
      Origin = 'TIP_COD'
      Required = True
    end
    object qryVeiculoVEI_PLA: TStringField
      DisplayLabel = 'Placa do Veiculo:'
      FieldName = 'VEI_PLA'
      Origin = 'VEI_PLA'
      Size = 12
    end
    object qryVeiculoVEI_ANO_FAB: TIntegerField
      DisplayLabel = 'Ano Fabrica'#231#227'o: '
      FieldName = 'VEI_ANO_FAB'
      Origin = 'VEI_ANO_FAB'
    end
  end
  object qryTicket: TFDQuery
    Active = True
    Connection = cnxEstacionamento
    SQL.Strings = (
      'SELECT TIC_NUM, CND_COD, TIC_DAT, TIC_HOR_ENT, TIC_HOR_SAI,'
      '    TIC_VAL_PAG'
      'FROM TICKET '
      'where '
      '  TIC_NUM = :TICKETPK')
    Left = 136
    Top = 112
    ParamData = <
      item
        Name = 'TICKETPK'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
    object qryTicketTIC_NUM: TIntegerField
      DisplayLabel = 'N'#250'mero do Ticket:'
      FieldName = 'TIC_NUM'
      Origin = 'TIC_NUM'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object qryTicketCND_COD: TIntegerField
      DisplayLabel = 'C'#243'digo da Condu'#231#227'o:'
      FieldName = 'CND_COD'
      Origin = 'CND_COD'
      Required = True
    end
    object qryTicketTIC_DAT: TSQLTimeStampField
      DisplayLabel = 'Data:'
      FieldName = 'TIC_DAT'
      Origin = 'TIC_DAT'
      EditMask = '!99/99/0000;1;_'
    end
    object qryTicketTIC_HOR_ENT: TSQLTimeStampField
      DisplayLabel = 'Hora de Entrada:'
      FieldName = 'TIC_HOR_ENT'
      Origin = 'TIC_HOR_ENT'
      EditMask = '!90:00;1;_'
    end
    object qryTicketTIC_HOR_SAI: TSQLTimeStampField
      DisplayLabel = 'Hora de Saida:'
      FieldName = 'TIC_HOR_SAI'
      Origin = 'TIC_HOR_SAI'
      EditMask = '!90:00;1;_'
    end
    object qryTicketTIC_VAL_PAG: TBCDField
      DisplayLabel = 'Valor Pago:'
      FieldName = 'TIC_VAL_PAG'
      Origin = 'TIC_VAL_PAG'
      Precision = 18
    end
  end
  object qryConducao: TFDQuery
    Active = True
    Connection = cnxEstacionamento
    SQL.Strings = (
      'SELECT CND_COD, CON_COD, VEI_COD'
      'FROM CONDUCAO '
      'where '
      '  CND_COD = :CONDUCAOPK')
    Left = 248
    Top = 112
    ParamData = <
      item
        Name = 'CONDUCAOPK'
        DataType = ftInteger
        ParamType = ptInput
        Value = Null
      end>
    object qryConducaoCND_COD: TIntegerField
      DisplayLabel = 'C'#243'digo da Condu'#231#227'o:'
      FieldName = 'CND_COD'
      Origin = 'CND_COD'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object qryConducaoCON_COD: TIntegerField
      DisplayLabel = 'C'#243'digo do Condutor:'
      FieldName = 'CON_COD'
      Origin = 'CON_COD'
    end
    object qryConducaoVEI_COD: TIntegerField
      DisplayLabel = 'C'#243'digo do Ve'#237'culo:'
      FieldName = 'VEI_COD'
      Origin = 'VEI_COD'
      Required = True
    end
  end
end
