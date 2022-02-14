// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;

// ---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm6::Timer1Timer(TObject *Sender) {
	if (MediaPlayer1->Position == MediaPlayer1->Length) {
		Form6->MediaPlayer1->Play();
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm6::FormCloseQuery(TObject *Sender, bool &CanClose) {
	Form6->MediaPlayer1->Stop();
}

// ---------------------------------------------------------------------------
void __fastcall TForm6::FormCreate(TObject *Sender) {
	Panel1->Height = MediaPlayer1->DisplayRect.bottom;
	Panel1->Width = MediaPlayer1->DisplayRect.right;
	Form6->Width = Panel1->Width;
	Form6->Height = Panel1->Height;
}
// ---------------------------------------------------------------------------

void __fastcall TForm6::Panel5Click(TObject *Sender) {
	ShellExecute(Handle, L"open", L"cmd.exe",
		String("/K \"image\\ii2015.pdf").t_str(), NULL, SW_SHOW);
}
// ---------------------------------------------------------------------------

void __fastcall TForm6::Panel3Click(TObject *Sender) {
	ShellExecute(Handle, L"open", L"cmd.exe",
		String("/K \"image\\ii2016.pdf").t_str(), NULL, SW_SHOW);
}
// ---------------------------------------------------------------------------

void __fastcall TForm6::Panel2Click(TObject *Sender) {
	ShellExecute(Handle, L"open", L"cmd.exe",
		String("/K \"image\\ii2017.pdf").t_str(), NULL, SW_SHOW);
}
// ---------------------------------------------------------------------------

void __fastcall TForm6::Panel4Click(TObject *Sender) {
	ShellExecute(Handle, L"open", L"cmd.exe",
		String("/K \"image\\ii2018.pdf").t_str(), NULL, SW_SHOW);
}
// ---------------------------------------------------------------------------

void __fastcall TForm6::Panel6Click(TObject *Sender) {
	ShellExecute(Handle, L"open", L"cmd.exe",
		String("/K \"image\\ii2019.pdf").t_str(), NULL, SW_SHOW);
}
// ---------------------------------------------------------------------------
