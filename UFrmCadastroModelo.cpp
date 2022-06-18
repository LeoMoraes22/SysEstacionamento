//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroModelo.h"
#include "UdtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastroCRUD"
#pragma resource "*.dfm"
TFrmCadastroModelo *FrmCadastroModelo;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroModelo::TFrmCadastroModelo(TComponent* Owner)
	: TFrmModeloCadastroCRUD(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmCadastroModelo::EvPesquisaDiretaExit(TObject *Sender)
{
	if(dbeCodigo->Modified)
	{
		dbeCodigo->Modified = false;
		int vCodigo = dbeCodigo->Text.ToInt();
		if(!dtmEstacionamento->PesquiseModelo(dbeCodigo->Text.ToInt()))
		{
			dtmEstacionamento->CrieNovoModelo(vCodigo);
		}
	}
}
//---------------------------------------------------------------------------


