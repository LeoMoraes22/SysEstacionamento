//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmModeloCadastroCRUD.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmModeloCadastroCRUD *FrmModeloCadastroCRUD;
//---------------------------------------------------------------------------
__fastcall TFrmModeloCadastroCRUD::TFrmModeloCadastroCRUD(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmModeloCadastroCRUD::EvFecharFormularioClick(TObject *Sender, TCloseAction &Action)

{
 Action = caFree;
}
//---------------------------------------------------------------------------



void __fastcall TFrmModeloCadastroCRUD::EvFecharClick(TObject *Sender)
{
   Close();
}
//---------------------------------------------------------------------------




