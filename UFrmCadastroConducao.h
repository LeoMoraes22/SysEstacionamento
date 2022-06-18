//---------------------------------------------------------------------------

#ifndef UFrmCadastroConducaoH
#define UFrmCadastroConducaoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastroCRUD.h"
#include <Data.DB.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBActns.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.StdActns.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TFrmCadastroConducao : public TFrmModeloCadastroCRUD
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TDBEdit *dbeCodigo;
	TLabel *Label2;
	TDBEdit *dbeCodigoCondutor;
	TLabel *Label3;
	TDBEdit *dbeCodigoVeiculo;
	void __fastcall EvPesquisaDiretaExit(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCadastroConducao(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadastroConducao *FrmCadastroConducao;
//---------------------------------------------------------------------------
#endif
