//---------------------------------------------------------------------------


#pragma hdrstop

#include "UdtmEstacionamento.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TdtmEstacionamento *dtmEstacionamento;
//---------------------------------------------------------------------------
__fastcall TdtmEstacionamento::TdtmEstacionamento(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::LimpeCampoModeloVeiculo()
{
   if((qryVeiculo->State == dsInsert) || (qryVeiculo->State == dsEdit))
   {
	  qryVeiculo->Edit();
      qryVeiculoMOD_COD->Clear();
   }
}
//---------------------------------------------------------------------------
bool __fastcall TdtmEstacionamento::PesquiseDireto(TFDQuery * aTabela,
									UnicodeString aParametro,
									int aValorPK)
{
	bool resultado = false;

	try
	{
		aTabela->DisableControls();
		aTabela->Close();
		aTabela->ParamByName(aParametro)->AsInteger = aValorPK;
		aTabela->Open();
		resultado = !aTabela->IsEmpty();
	}
	__finally
	{
        aTabela->EnableControls();
	}

    return resultado;
}
//---------------------------------------------------------------------------
bool __fastcall TdtmEstacionamento::PesquiseMontadora(int avalorPK)
{
	return PesquiseDireto(qryMontadora, "MONTADORAPK", avalorPK);

}
//---------------------------------------------------------------------------
bool __fastcall TdtmEstacionamento::PesquiseCondutor(int avalorPK)
{
	return PesquiseDireto(qryCondutor, "CONDUTORPK" , avalorPK);
}
//---------------------------------------------------------------------------
bool __fastcall TdtmEstacionamento::PesquiseModelo(int avalorPK)
{
	return PesquiseDireto (qryModelo, "MODELOPK", avalorPK);
}
//---------------------------------------------------------------------------
bool __fastcall TdtmEstacionamento::PesquiseVeiculo(int avalorPK)
{
	return PesquiseDireto (qryVeiculo, "VEICULOPK", avalorPK);
}
//---------------------------------------------------------------------------
bool __fastcall TdtmEstacionamento::PesquiseTipo(int avalorPK)
{
    return PesquiseDireto (qryTipo, "TIPOPK", avalorPK);
}
//---------------------------------------------------------------------------
bool __fastcall TdtmEstacionamento::PesquiseTicket(int avalorPK)
{
	return PesquiseDireto (qryTicket, "TICKETPK", avalorPK);
}
//---------------------------------------------------------------------------
bool __fastcall TdtmEstacionamento::PesquiseConducao(int avalorPK)
{
   return PesquiseDireto (qryConducao, "CONDUCAOPK", avalorPK);
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::CrieNovoRegistro(TFDQuery*aTabela,UnicodeString aNomeColunaPK, int avalorPK)
{
	aTabela->Cancel();
	aTabela->Append();
    aTabela->FieldByName(aNomeColunaPK)->AsInteger = avalorPK;
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::CrieNovaMontadora (int avalorPK)
{
    CrieNovoRegistro(qryMontadora, "MON_COD", avalorPK);
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::CrieNovoCondutor (int avalorPK)
{
	CrieNovoRegistro(qryCondutor, "CON_COD", avalorPK);
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::CrieNovoModelo (int avalorPK)
{
	CrieNovoRegistro(qryModelo, "MOD_COD", avalorPK);
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::CrieNovoTipo (int avalorPK)
{
	CrieNovoRegistro(qryTipo, "TIP_COD", avalorPK);
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::CrieNovoVeiculo (int avalorPK)
{
    CrieNovoRegistro(qryVeiculo, "VEI_COD", avalorPK);
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::CrieNovoTicket (int avalorPK)
{
	CrieNovoRegistro(qryTicket, "TIC_NUM", avalorPK);
}
//---------------------------------------------------------------------------
void __fastcall TdtmEstacionamento::CrieNovaConducao (int avalorPK)
{
    CrieNovoRegistro(qryConducao, "CND_COD", avalorPK);
}
//---------------------------------------------------------------------------
