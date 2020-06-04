//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class Tf_main : public TForm
{
__published:	// IDE-managed Components
	TButton *b_send;
	TEdit *t_send;
	TMemo *m_chat;
	void __fastcall b_sendClick(TObject *Sender);
	void __fastcall t_sendKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// User declarations
public:		// User declarations
	__fastcall Tf_main(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tf_main *f_main;
//---------------------------------------------------------------------------
#endif
