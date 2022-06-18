//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroTipo.h"
#include "UdtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastroCRUD"
#pragma resource "*.dfm"
TFrmCadastroTipo *FrmCadastroTipo;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroTipo::TFrmCadastroTipo(TComponent* Owner)
	: TFrmModeloCadastroCRUD(Owner)
{
}
//---------------------------------------------------------------------------




void __fastcall TFrmCadastroTipo::EvPesquisaDiretaExit(TObject *Sender)
{
	if(dbeCodigo->Modified)
	{
		dbeCodigo->Modified = false;
		int vCodigo = dbeCodigo->Text.ToInt();
		if(!dtmEstacionamento->PesquiseTipo(dbeCodigo->Text.ToInt()))
		{
			dtmEstacionamento->CrieNovoTipo(vCodigo);
		}
	}
}
//---------------------------------------------------------------------------

