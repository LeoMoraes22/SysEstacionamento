//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroTicket.h"
#include "UdtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastroCRUD"
#pragma resource "*.dfm"
TFrmCadastroTicket *FrmCadastroTicket;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroTicket::TFrmCadastroTicket(TComponent* Owner)
	: TFrmModeloCadastroCRUD(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFrmCadastroTicket::EvPesquisaDiretaExit(TObject *Sender)
{
	if(dbeCodigo->Modified)
	{
		dbeCodigo->Modified = false;
		int vCodigo = dbeCodigo->Text.ToInt();
		if(!dtmEstacionamento->PesquiseTicket(dbeCodigo->Text.ToInt()))
		{
			dtmEstacionamento->CrieNovoTicket(vCodigo);
		}
	}
}
//---------------------------------------------------------------------------

