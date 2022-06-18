object FrmPrincipal: TFrmPrincipal
  Left = 0
  Top = 0
  Caption = 'Sistema de controle de Estacionamento'
  ClientHeight = 235
  ClientWidth = 543
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsMDIForm
  Menu = mnmPrincipal
  OldCreateOrder = False
  WindowState = wsMaximized
  PixelsPerInch = 96
  TextHeight = 13
  object mnmPrincipal: TMainMenu
    Left = 48
    Top = 8
    object Cadastro1: TMenuItem
      Caption = 'Cadastro'
      object Condutor1: TMenuItem
        Caption = 'Condutor...'
        OnClick = EvAtivarCadastroCondutorClick
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Condutor2: TMenuItem
        Caption = 'Montadora...'
        OnClick = EvAtivarCadastroMontadoraClick
      end
      object Modelo1: TMenuItem
        Caption = 'Modelo...'
        OnClick = EvAtivarCadastroModeloClick
      end
      object Modelo2: TMenuItem
        Caption = 'Ve'#237'culo...'
        OnClick = EvAtivarCadastroVeiculoClick
      end
      object ipo1: TMenuItem
        Caption = 'Tipo...'
        OnClick = EvAtivarCadastroTipoClick
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object ipo2: TMenuItem
        Caption = 'Sair'
        OnClick = EvEncerrarSistemaClick
      end
    end
    object Cadastro2: TMenuItem
      Caption = 'Processo'
      object icket1: TMenuItem
        Caption = 'Ticket...'
        ShortCut = 16468
        OnClick = EvCadastroTicketClick
      end
    end
    object Relatrio1: TMenuItem
      Caption = 'Relat'#243'rio'
      object Veculo2: TMenuItem
        Caption = 'Condu'#231#227'o...'
        OnClick = EvCadastroConducaoClick
      end
      object Veculo1: TMenuItem
        Caption = 'Perman'#234'ncia...'
      end
    end
  end
end
