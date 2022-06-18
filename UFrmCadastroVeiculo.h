//---------------------------------------------------------------------------

#ifndef UFrmCadastroVeiculoH
#define UFrmCadastroVeiculoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastroCRUD.h"
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBActns.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ToolWin.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFrmCadastroVeiculo : public TFrmModeloCadastroCRUD
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TDBEdit *dbeCodigo;
	TDataSource *dtsMontadoraLK;
	TLabel *Label2;
	TDBEdit *dbeCodMontadora;
	TLabel *Label3;
	TDBEdit *dbeCodigoModelo;
	TLabel *Label4;
	TDBEdit *dbeCodigoTipo;
	TLabel *Label5;
	TDBEdit *dbePlacaVeiculo;
	TLabel *Label6;
	TDBEdit *dbeAnoFabricacao;
	TDBLookupComboBox *dblkMontadora;
	TDBLookupComboBox *dblkModelo;
	TDBLookupComboBox *dblkTipo;
	TFDQuery *qryMontadoraLK;
	TDataSource *dtsModeloLK;
	TFDQuery *qryModeloLK;
	TDataSource *dtsTipoLK;
	TFDQuery *qryTipoLK;
	TDBNavigator *DBNavigator1;
	void __fastcall EvFiltrarModelosCloseUp(TObject *Sender);
	void __fastcall EvFiltrarModeloExit(TObject *Sender);
	void __fastcall EvFiltrarModelosShow(TObject *Sender);
	void __fastcall EvAtualizaModeloClick(TObject *Sender, TNavigateBtn Button);
	void __fastcall EvPesquisaDiretaExit(TObject *Sender);
private:	// User declarations
    void __fastcall  FiltreModelos(int aCodigoMontadora);
public:		// User declarations
	__fastcall TFrmCadastroVeiculo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadastroVeiculo *FrmCadastroVeiculo;
//---------------------------------------------------------------------------
#endif
