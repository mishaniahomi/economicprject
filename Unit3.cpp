//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
                #include <jpeg.hpp>
#include <GIFImg.hpp>
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::ListBox1Click(TObject *Sender)
{
Image1->Stretch = 0;
Image1->AutoSize = 1;
	UnicodeString pway;
	switch (Form3->ListBox1->ItemIndex) {
	case 0:
		pway = "image\\1.gif";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 1:
		pway = "image\\2.gif";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 2:
		pway = "image\\3.jpg";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 3:
		pway = "image\\4.jpg";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 4:
		pway = "image\\5.jpg";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 5:
		pway = "image\\6.gif";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 6:
		pway = "image\\7.gif";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 7:
		pway = "image\\8.gif";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 8:
		pway = "image\\9.jpg";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 9:
		pway = "image\\10.jpg";
		Image1->Picture->LoadFromFile(pway);
		break;
	case 10:
		pway = "image\\10.jpg";
		ShellExecute(Handle,L"open",L"cmd.exe", String("/K \"image\\11.pdf").t_str(), NULL, SW_SHOW);
		break;
	case 11:
		pway = "image\\12.jpg";
		Image1->Picture->LoadFromFile(pway);
		break;

	}

Image1->Stretch = 1;
	Image1->AutoSize = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
Image1->Height *= 2;
Image1->Width *= 2;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button4Click(TObject *Sender)
{
	Image1->Height /= 2;
	Image1->Width /= 2;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormResize(TObject *Sender)
{
	Form3->ScrollBox1->Left = Form3->ListBox1->Width;
	Form3->ScrollBox1->Height = Form3->Height - 70;
	Form3->ScrollBox1->Width = Form3->Width - Form3->ListBox1->Width - 20;
}
//---------------------------------------------------------------------------

