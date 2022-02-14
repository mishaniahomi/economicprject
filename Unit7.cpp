// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit8.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;

void f1() {
	Form8->Image1->Left = (Form8->Width - Form8->Image1->Width) / 2;
	Form8->Image1->Top = (Form8->Height - Form8->Image1->Height) / 2;
}

// ---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm7::Timer1Timer(TObject *Sender) {
	if (MediaPlayer1->Position == MediaPlayer1->Length) {
		Form7->MediaPlayer1->Play();
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm7::FormCreate(TObject *Sender) {
	MediaPlayer1->Play();
	Panel1->Height = MediaPlayer1->DisplayRect.bottom;
	Panel1->Width = MediaPlayer1->DisplayRect.right;
	Form7->Width = Panel1->Width;
	Form7->Height = Panel1->Height;
	ScrollBox1->Left = (Form7->Width - ScrollBox1->Width) / 2;
	ScrollBox1->Height = Form7->Height - 60;
	ScrollBox1->Top = 20;
}

// ---------------------------------------------------------------------------
void __fastcall TForm7::Panel2Click(TObject *Sender) {
	Form8->Show();
	Form8->Image2->Picture->LoadFromFile("image\\88-1.jpg");
	f1();
}
// ---------------------------------------------------------------------------

void __fastcall TForm7::Panel3Click(TObject *Sender) {
	Form8->Show();
	Form8->Image2->Picture->LoadFromFile("image\\88-2.jpg");
	f1();
}
// ---------------------------------------------------------------------------

void __fastcall TForm7::Panel4Click(TObject *Sender) {
	Form8->Show();
	Form8->Image2->Picture->LoadFromFile("image\\88-3.jpg");
	f1();
}
// ---------------------------------------------------------------------------

void __fastcall TForm7::Panel5Click(TObject *Sender) {
	Form8->Show();
	Form8->Image2->Picture->LoadFromFile("image\\88-4.jpg");
	f1();
}
// ---------------------------------------------------------------------------

void __fastcall TForm7::Panel7Click(TObject *Sender) {
	Form8->Show();
	Form8->Image2->Picture->LoadFromFile("image\\88-5.jpg");
	f1();
}
// ---------------------------------------------------------------------------
