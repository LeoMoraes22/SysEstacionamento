//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmPrincipal.h"
#include "UFrmCadastroCondutor.h"
#include "UFrmCadastroMontadora.h"
#include "UFrmCadastroVeiculo.h"
#include "UFrmCadastroTipo.h"
#include "UFrmCadastroModelo.h"
#include "UFrmCadastroTicket.h"
#include "UFrmCadastroConducao.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmPrincipal *FrmPrincipal;
//---------------------------------------------------------------------------
__fastcall TFrmPrincipal::TFrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFrmPrincipal::EvEncerrarSistemaClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TFrmPrincipal::EvAtivarCadastroCondutorClick(TObject *Sender)
{
    new TFrmCadastroCondutor(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroMontadoraClick(TObject *Sender)
{
    new TFrmCadastroMontadora(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroVeiculoClick(TObject *Sender)
{
    new TFrmCadastroVeiculo(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroTipoClick(TObject *Sender)
{
	new TFrmCadastroTipo(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvAtivarCadastroModeloClick(TObject *Sender)
{
    new TFrmCadastroModelo(this);
}
//---------------------------------------------------------------------------


void __fastcall TFrmPrincipal::EvCadastroTicketClick(TObject *Sender)
{
	new TFrmCadastroTicket(this);
}
//---------------------------------------------------------------------------

void __fastcall TFrmPrincipal::EvCadastroConducaoClick(TObject *Sender)
{
	new TFrmCadastroConducao(this);
}
//---------------------------------------------------------------------------

