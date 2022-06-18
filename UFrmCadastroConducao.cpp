//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroConducao.h"
#include "UdtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastroCRUD"
#pragma resource "*.dfm"
TFrmCadastroConducao *FrmCadastroConducao;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroConducao::TFrmCadastroConducao(TComponent* Owner)
	: TFrmModeloCadastroCRUD(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmCadastroConducao::EvPesquisaDiretaExit(TObject *Sender)
{
	if(dbeCodigo->Modified)
	{
		dbeCodigo->Modified = false;
		int vCodigo = dbeCodigo->Text.ToInt();
		if(!dtmEstacionamento->PesquiseConducao(dbeCodigo->Text.ToInt()))
		{
			dtmEstacionamento->CrieNovaConducao(vCodigo);
		}
	}
}
//---------------------------------------------------------------------------

