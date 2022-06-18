//---------------------------------------------------------------------------

#ifndef UdtmEstacionamentoH
#define UdtmEstacionamentoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.FB.hpp>
#include <FireDAC.Phys.FBDef.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Phys.IBBase.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Stan.Param.hpp>
//---------------------------------------------------------------------------
class TdtmEstacionamento : public TDataModule
{
__published:	// IDE-managed Components
	TFDConnection *cnxEstacionamento;
	TFDPhysFBDriverLink *PhysFBDriver;
	TFDGUIxWaitCursor *WaitCursor;
	TFDQuery *qryMontadora;
	TFDQuery *qryTipo;
	TFDQuery *qryCondutor;
	TIntegerField *qryTipoTIP_COD;
	TStringField *qryTipoTIP_DES;
	TIntegerField *qryMontadoraMON_COD;
	TStringField *qryMontadoraMON_NOM;
	TIntegerField *qryCondutorCON_COD;
	TStringField *qryCondutorCON_NOM;
	TStringField *qryCondutorCON_CNH;
	TStringField *qryCondutorCON_CPF;
	TFDQuery *qryModelo;
	TIntegerField *qryModeloMOD_COD;
	TIntegerField *qryModeloMON_COD;
	TStringField *qryModeloMOD_NOM;
	TFDQuery *qryVeiculo;
	TIntegerField *qryVeiculoVEI_COD;
	TIntegerField *qryVeiculoMON_COD;
	TIntegerField *qryVeiculoMOD_COD;
	TIntegerField *qryVeiculoTIP_COD;
	TStringField *qryVeiculoVEI_PLA;
	TIntegerField *qryVeiculoVEI_ANO_FAB;
	TFDQuery *qryTicket;
	TIntegerField *qryTicketTIC_NUM;
	TIntegerField *qryTicketCND_COD;
	TSQLTimeStampField *qryTicketTIC_DAT;
	TSQLTimeStampField *qryTicketTIC_HOR_ENT;
	TSQLTimeStampField *qryTicketTIC_HOR_SAI;
	TBCDField *qryTicketTIC_VAL_PAG;
	TFDQuery *qryConducao;
	TIntegerField *qryConducaoCND_COD;
	TIntegerField *qryConducaoCON_COD;
	TIntegerField *qryConducaoVEI_COD;
private:	// User declarations
	bool __fastcall PesquiseDireto(TFDQuery * aTabela,
									UnicodeString aParametro,
									int aValorPK);
	void __fastcall CrieNovoRegistro(TFDQuery*aTabela,
								UnicodeString aNomeColunaPK, int avalorPK);

public:		// User declarations
	void __fastcall LimpeCampoModeloVeiculo();

	bool __fastcall PesquiseMontadora(int avalorPK);

	bool __fastcall PesquiseCondutor(int avalorPK);

	bool __fastcall PesquiseModelo(int avalorPK);

	bool __fastcall PesquiseVeiculo(int avalorPK);

	bool __fastcall PesquiseTipo(int avalorPK);

	bool __fastcall PesquiseTicket(int avalorPK);

	bool __fastcall PesquiseConducao(int avalorPK);

	void __fastcall CrieNovaMontadora (int avalorPK);

	void __fastcall CrieNovoCondutor (int avalorPK);

	void __fastcall CrieNovoModelo (int avalorPK);

	void __fastcall CrieNovoTipo (int avalorPK);

	void __fastcall CrieNovoVeiculo (int avalorPK);

	void __fastcall CrieNovoTicket (int avalorPK);

	void __fastcall CrieNovaConducao (int avalorPK);

	__fastcall TdtmEstacionamento(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TdtmEstacionamento *dtmEstacionamento;
//---------------------------------------------------------------------------
#endif
