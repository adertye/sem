//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tf_main *f_main;
//---------------------------------------------------------------------------
__fastcall Tf_main::Tf_main(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tf_main::b_sendClick(TObject *Sender)
{
	TDateTime* myTime = new TDateTime(Now());
	String text = "me: " + myTime->FormatString("dd.m.yyyy") +
		" " + myTime->FormatString("hh:mm:ss") + " " + t_send->Text;
	m_chat->Lines->Add(text);

	if (t_send->Text.Pos("rivet")) {
		text = "\n" + myTime->FormatString("dd.m.yyyy") +
		" " + myTime->FormatString("hh:mm:ss") + "Bot: Privet";
	} else if (t_send->Text.Pos("dela")) {
		text = "\n" + myTime->FormatString("dd.m.yyyy") +
		" " + myTime->FormatString("hh:mm:ss") + "Bot: Horosho";
	} else {
		text = "\n" + myTime->FormatString("dd.m.yyyy") +
		" " + myTime->FormatString("hh:mm:ss") + "Bot: Kak dela";
	}
	m_chat->Lines->Add(text);
}
//---------------------------------------------------------------------------
void __fastcall Tf_main::t_sendKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
 if (Key == '\r')
 {
	b_sendClick(Sender);
 }
}
//---------------------------------------------------------------------------

