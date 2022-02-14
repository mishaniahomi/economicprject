// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit5.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;

void f1(TScrollBox *Sb) {

	Form5->ScrollBox1->Visible = 0;
	Form5->ScrollBox2->Visible = 0;
	Form5->ScrollBox3->Visible = 0;
	Form5->ScrollBox4->Visible = 0;
	Form5->ScrollBox5->Visible = 0;
	Form5->ScrollBox6->Visible = 0;
	Form5->ScrollBox7->Visible = 0;
	Form5->ScrollBox8->Visible = 0;
	Form5->ScrollBox9->Visible = 0;
	Sb->Visible = 1;

}

void PanelResize(TPanel *P) {
	P->Left = int(double(P->Left)*double(Form4->Width / 1280.0));
	P->Top = int(double(P->Top)*double(Form4->Height / 718.0));
	P->Height = int(double(P->Height)*double(Form4->Height / 718.0));
	P->Width = int(double(P->Width)*double(Form4->Width / 1280.0));
	P->BevelOuter = bvNone;
	// P->BorderStyle = bsSingle;
}

// ---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender) {
	Form4->Width = Screen->Width;
	Form4->Height = Screen->Height;
	Image1->Width = 0.05 * Screen->Width;
	Image2->Width = 0.9 * Screen->Width;
	Image3->Width = 0.05 * Screen->Width;
	Button1->Width = 0.05 * Screen->Width;
	Image2->Left = Image1->Width;
	Image3->Left = Image1->Width + Image2->Width;
	Image1->Height = Screen->Height;
	Image2->Height = Screen->Height;
	Image3->Height = Screen->Height;
	PanelResize(Panel1);
	PanelResize(Panel2);
	PanelResize(Panel3);
	PanelResize(Panel4);
	PanelResize(Panel5);
	PanelResize(Panel6);
	PanelResize(Panel7);
	PanelResize(Panel8);
	PanelResize(Panel9);
	PanelResize(Panel10);
	PanelResize(Panel11);
	PanelResize(Panel12);
	PanelResize(Panel13);

}
// ---------------------------------------------------------------------------

void __fastcall TForm4::Panel1Click(TObject *Sender) {
	f1(Form5->ScrollBox3);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}

// ---------------------------------------------------------------------------
void __fastcall TForm4::Panel12Click(TObject *Sender) {
	f1(Form5->ScrollBox1);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TForm4::Panel13Click(TObject *Sender) {
	f1(Form5->ScrollBox2);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender) {
	Form4->Close();
}

// ---------------------------------------------------------------------------
void __fastcall TForm4::Panel3Click(TObject *Sender) {
	f1(Form5->ScrollBox4);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TForm4::Panel4Click(TObject *Sender) {
	f1(Form5->ScrollBox5);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TForm4::Panel5Click(TObject *Sender) {
	f1(Form5->ScrollBox6);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TForm4::Panel6Click(TObject *Sender) {
	f1(Form5->ScrollBox7);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TForm4::Panel7Click(TObject *Sender) {
	f1(Form5->ScrollBox8);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}

// ---------------------------------------------------------------------------
void __fastcall TForm4::Panel9Click(TObject *Sender) {
	f1(Form5->ScrollBox9);
	Form5->MediaPlayer1->Play();
	Form5->Show();
}
// ---------------------------------------------------------------------------
