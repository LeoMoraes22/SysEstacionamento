//---------------------------------------------------------------------------

#ifndef UFrmCadastroMontadoraH
#define UFrmCadastroMontadoraH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastroCRUD.h"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.DBActns.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TFrmCadastroMontadora : public TFrmModeloCadastroCRUD
{
__published:	// IDE-managed Components
	TDBEdit *dbeCodigo;
	TLabel *Label1;
	TDBEdit *dbeNome;
	TLabel *Label2;
	void __fastcall EvPesquisaDiretaExit(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCadastroMontadora(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadastroMontadora *FrmCadastroMontadora;
//---------------------------------------------------------------------------
#endif
