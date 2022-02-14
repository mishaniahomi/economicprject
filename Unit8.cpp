// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;

// ---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm8::FormCreate(TObject *Sender) {
	Image1->Width = Form8->Width;
	Image1->Height = Form8->Height;
	Form8->Image1->Left = (Form8->Width - Form8->Image1->Width) / 2;
	Form8->Image1->Top = (Form8->Height - Form8->Image1->Height) / 2;
}

// ---------------------------------------------------------------------------
void __fastcall TForm8::FormResize(TObject *Sender) {
	Image1->Width = Form8->Width;
	Image1->Height = Form8->Height;
	Form8->Image1->Left = (Form8->Width - Form8->Image1->Width) / 2;
	Form8->Image1->Top = (Form8->Height - Form8->Image1->Height) / 2;
}
// ---------------------------------------------------------------------------
