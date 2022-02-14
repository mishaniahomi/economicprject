// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;

void scrollresiza(TScrollBox *Sb) {
	Sb->Top = 10;
	Sb->Height = Form5->Height - 60;

	if (Sb->Width > Form5->Width) {
		Sb->Width = Form5->Width - 20;

	}
	Sb->Left = (Form5->Width - Sb->Width) / 2;
	Sb->Color = clWhite;

}

// ---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------

void __fastcall TForm5::FormCreate(TObject *Sender) {
	Form5->MediaPlayer1->Stop();
	Panel1->Left = 0;
	Panel1->Top = 0;
	Panel1->Width = Form5->Width;
	Panel1->Height = Form5->Height;
	scrollresiza(Form5->ScrollBox1);
	scrollresiza(Form5->ScrollBox2);
	scrollresiza(Form5->ScrollBox3);
	scrollresiza(Form5->ScrollBox4);
	scrollresiza(Form5->ScrollBox5);
	scrollresiza(Form5->ScrollBox6);
	scrollresiza(Form5->ScrollBox7);
	scrollresiza(Form5->ScrollBox8);
	scrollresiza(Form5->ScrollBox9);
}

// ---------------------------------------------------------------------------
void __fastcall TForm5::Timer1Timer(TObject *Sender) {
	if (MediaPlayer1->Position == MediaPlayer1->Length) {
		MediaPlayer1->Play();
	}

}
// ---------------------------------------------------------------------------

void __fastcall TForm5::FormCloseQuery(TObject *Sender, bool &CanClose) {
	Form5->MediaPlayer1->Stop();
}
// ---------------------------------------------------------------------------
