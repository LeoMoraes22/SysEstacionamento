//---------------------------------------------------------------------------

#ifndef UFrmModeloCadastroCRUDH
#define UFrmModeloCadastroCRUDH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.DBActns.hpp>
#include <Vcl.StdActns.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Data.DB.hpp>
//---------------------------------------------------------------------------
class TFrmModeloCadastroCRUD : public TForm
{
__published:	// IDE-managed Components
	TToolBar *tlbCadastroCRUD;
	TToolButton *btnNovo;
	TToolButton *btnPesquisar;
	TToolButton *btnGravar;
	TToolButton *btnExcluir;
	TToolButton *ToolButton1;
	TToolButton *btnCancelar;
	TToolButton *ToolButton2;
	TToolButton *btnFechar;
	TActionList *aclCadastroCRUD;
	TDataSetDelete *actExcluir;
	TDataSetPost *actGravar;
	TDataSetCancel *actCancelar;
	TWindowClose *actFechar;
	TAction *actPesquisar;
	TDataSetInsert *actNovo;
	TImageList *imgHabilitada;
	TImageList *imgDesabilitada;
	TImageList *imgHot;
	TDataSource *dtsPrincipal;
	void __fastcall EvFecharFormularioClick(TObject *Sender, TCloseAction &Action);
	void __fastcall EvFecharClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFrmModeloCadastroCRUD(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmModeloCadastroCRUD *FrmModeloCadastroCRUD;
//---------------------------------------------------------------------------
#endif
