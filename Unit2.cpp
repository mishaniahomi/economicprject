// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <jpeg.hpp>
#include <GIFImg.hpp>

#include "Unit2.h"
#include "Unit1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SHDocVw_OCX"
#pragma resource "*.dfm"
TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------


void __fastcall TForm2::Button3Click(TObject *Sender) {
	Form2->Image1->Height *= 2;
	Form2->Image1->Width *= 2;
}
// ---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender) {
	Form2->Image1->Height /= 2;
	Form2->Image1->Width /= 2;
}
// ---------------------------------------------------------------------------
