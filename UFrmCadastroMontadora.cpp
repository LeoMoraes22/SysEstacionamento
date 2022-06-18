//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroMontadora.h"
#include "UdtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastroCRUD"
#pragma resource "*.dfm"
TFrmCadastroMontadora *FrmCadastroMontadora;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroMontadora::TFrmCadastroMontadora(TComponent* Owner)
	: TFrmModeloCadastroCRUD(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFrmCadastroMontadora::EvPesquisaDiretaExit(TObject *Sender)
{
	if(dbeCodigo->Modified)
	{
		dbeCodigo->Modified = false;
		int vCodigo = dbeCodigo->Text.ToInt();
		if(!dtmEstacionamento->PesquiseMontadora(dbeCodigo->Text.ToInt()))
		{
			//ShowMessage("Montadora não existe!");
			//dbeCodigo->SetFocus();
            dtmEstacionamento->CrieNovaMontadora(vCodigo);
        }
    }
}
//---------------------------------------------------------------------------

