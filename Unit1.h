//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TMediaPlayer *MediaPlayer1;
	TTimer *Timer1;
	TPanel *Panel2;
	TLabel *Label1;
	TPanel *Panel3;
	TLabel *Label2;
	TPanel *Panel4;
	TLabel *Label3;
	TPanel *Panel5;
	TLabel *Label4;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Label1Click(TObject *Sender);
	void __fastcall Panel4Click(TObject *Sender);
	void __fastcall Label3Click(TObject *Sender);
	void __fastcall Label4Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
