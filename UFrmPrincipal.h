//---------------------------------------------------------------------------

#ifndef UFrmPrincipalH
#define UFrmPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *mnmPrincipal;
	TMenuItem *Cadastro1;
	TMenuItem *Cadastro2;
	TMenuItem *Relatrio1;
	TMenuItem *Condutor1;
	TMenuItem *Condutor2;
	TMenuItem *Modelo1;
	TMenuItem *Modelo2;
	TMenuItem *ipo1;
	TMenuItem *ipo2;
	TMenuItem *icket1;
	TMenuItem *Veculo1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *Veculo2;
	void __fastcall EvEncerrarSistemaClick(TObject *Sender);
	void __fastcall EvAtivarCadastroCondutorClick(TObject *Sender);
	void __fastcall EvAtivarCadastroMontadoraClick(TObject *Sender);
	void __fastcall EvAtivarCadastroVeiculoClick(TObject *Sender);
	void __fastcall EvAtivarCadastroTipoClick(TObject *Sender);
	void __fastcall EvAtivarCadastroModeloClick(TObject *Sender);
	void __fastcall EvCadastroTicketClick(TObject *Sender);
	void __fastcall EvCadastroConducaoClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmPrincipal *FrmPrincipal;
//---------------------------------------------------------------------------
#endif
