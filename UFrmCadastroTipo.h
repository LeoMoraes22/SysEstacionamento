//---------------------------------------------------------------------------

#ifndef UFrmCadastroTipoH
#define UFrmCadastroTipoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastroCRUD.h"
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBActns.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ToolWin.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TFrmCadastroTipo : public TFrmModeloCadastroCRUD
{
__published:	// IDE-managed Components
	TDBEdit *dbeCodigo;
	TDBEdit *dbeTipo;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall EvPesquisaDiretaExit(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCadastroTipo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadastroTipo *FrmCadastroTipo;
//---------------------------------------------------------------------------
#endif
