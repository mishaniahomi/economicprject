// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit7.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender) {
	Panel1->Height = MediaPlayer1->DisplayRect.bottom;
	Panel1->Width = MediaPlayer1->DisplayRect.right;
	Form1->Width = Panel1->Width;
	Form1->Height = Panel1->Height;
	Form1->MediaPlayer1->Play();
	Panel3->Height = Form1->Height / 4;
	Panel4->Height = Form1->Height / 4;
	Panel2->Height = Form1->Height / 4;
	Panel5->Height = Form1->Height / 4;
	Panel3->Width = Form1->Width / 4;
	Panel5->Width = Form1->Width / 4;
	Panel2->Width = Form1->Width / 4;
	Panel4->Width = Form1->Width / 4;
	Panel3->Left = 0;
	Panel4->Left = Form1->Width / 4;
	Panel2->Left = 2 * Form1->Width / 4;
	Panel5->Left = 3 * Form1->Width / 4;
	Label1->Font->Size = Form1->Height / 55;
	Label2->Font->Size = Form1->Height / 55;
	Label3->Font->Size = Form1->Height / 55;
	Label4->Font->Size = Form1->Height / 55;
	Label2->Left = (Panel3->Width - Label2->Width) / 2;
	Label2->Top = (Panel3->Height - Label2->Height) / 2;
	Label1->Left = (Panel3->Width - Label1->Width) / 2;
	Label1->Top = (Panel3->Height - Label1->Height) / 2;
	Label3->Left = (Panel3->Width - Label3->Width) / 2;
	Label3->Top = (Panel3->Height - Label3->Height) / 2;
	Label4->Left = (Panel3->Width - Label4->Width) / 2;
	Label4->Top = (Panel3->Height - Label4->Height) / 2;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender) {
	if (MediaPlayer1->Position == MediaPlayer1->Length) {
		Form1->MediaPlayer1->Play();
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender) {
	Form3->Show();
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Label1Click(TObject *Sender) {
	Form4->Show();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Panel4Click(TObject *Sender) {
	Form6->Show();
	Form6->MediaPlayer1->Play();
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Label3Click(TObject *Sender) {
	Form6->Show();
	Form6->MediaPlayer1->Play();
}
// ---------------------------------------------------------------------------
void __fastcall TForm1::Label4Click(TObject *Sender)
{
   Form7->Show();

}
//---------------------------------------------------------------------------

