//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroCondutor.h"
#include "UdtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastroCRUD"
#pragma resource "*.dfm"
TFrmCadastroCondutor *FrmCadastroCondutor;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroCondutor::TFrmCadastroCondutor(TComponent* Owner)
	: TFrmModeloCadastroCRUD(Owner)
{


}
//---------------------------------------------------------------------------
void __fastcall TFrmCadastroCondutor::EvPesquisaDiretaExit(TObject *Sender)
{
	if(dbeCodigo->Modified)
	{
		dbeCodigo->Modified = false;
		int vCodigo = dbeCodigo->Text.ToInt();
		if(!dtmEstacionamento->PesquiseCondutor(dbeCodigo->Text.ToInt()))
		{
			dtmEstacionamento->CrieNovoCondutor(vCodigo);
		}
	}
}
//---------------------------------------------------------------------------

