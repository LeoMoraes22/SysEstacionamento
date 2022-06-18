//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroVeiculo.h"
#include "UdtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastroCRUD"
#pragma resource "*.dfm"
TFrmCadastroVeiculo *FrmCadastroVeiculo;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroVeiculo::TFrmCadastroVeiculo(TComponent* Owner)
	: TFrmModeloCadastroCRUD(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall  TFrmCadastroVeiculo::FiltreModelos(int aCodigoMontadora)
{
	try
	{
	qryModeloLK->DisableControls();
	qryModeloLK->Close();
	qryModeloLK->ParamByName("MON_COD")->AsInteger = aCodigoMontadora;
	qryModeloLK->Open();
	}
	__finally
	{
	qryModeloLK->EnableControls();
    }
}
//---------------------------------------------------------------------------
void __fastcall TFrmCadastroVeiculo::EvFiltrarModelosCloseUp(TObject *Sender)
{
	FiltreModelos(dbeCodMontadora->Text.ToInt());
    dtmEstacionamento->LimpeCampoModeloVeiculo();
}
//---------------------------------------------------------------------------


void __fastcall TFrmCadastroVeiculo::EvFiltrarModeloExit(TObject *Sender)
{
	if (dbeCodMontadora->Modified)
	{
        dbeCodMontadora->Modified = false;
		EvFiltrarModelosCloseUp(nullptr);
	}
}
//---------------------------------------------------------------------------

void __fastcall TFrmCadastroVeiculo::EvFiltrarModelosShow(TObject *Sender)
{
	FiltreModelos((dbeCodMontadora)->Text.ToIntDef(-1));
}
//---------------------------------------------------------------------------

void __fastcall TFrmCadastroVeiculo::EvAtualizaModeloClick(TObject *Sender, TNavigateBtn Button)

{
	switch(Button)
	{
		case nbFirst:
		case nbPrior:
		case nbNext:
		case nbLast:
		case nbCancel:
            FiltreModelos((dbeCodMontadora)->Text.ToIntDef(-1));
	}
}
//---------------------------------------------------------------------------

void __fastcall TFrmCadastroVeiculo::EvPesquisaDiretaExit(TObject *Sender)
{
	if(dbeCodigo->Modified)
	{
		dbeCodigo->Modified = false;
		int vCodigo = dbeCodigo->Text.ToInt();
		if(!dtmEstacionamento->PesquiseVeiculo(dbeCodigo->Text.ToInt()))
		{
			dtmEstacionamento->CrieNovoVeiculo(vCodigo);
		}
	}
}
//---------------------------------------------------------------------------

