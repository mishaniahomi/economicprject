//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TScrollBox *ScrollBox1;
	TImage *Image1;
	TScrollBox *ScrollBox2;
	TImage *Image2;
	TImage *Image3;
	TScrollBox *ScrollBox3;
	TImage *Image5;
	TLabel *Label2;
	TImage *Image6;
	TScrollBox *ScrollBox4;
	TImage *Image7;
	TScrollBox *ScrollBox5;
	TImage *Image8;
	TScrollBox *ScrollBox6;
	TImage *Image9;
	TScrollBox *ScrollBox7;
	TImage *Image10;
	TScrollBox *ScrollBox8;
	TImage *Image11;
	TScrollBox *ScrollBox9;
	TImage *Image12;
	TPanel *Panel1;
	TTimer *Timer1;
	TMediaPlayer *MediaPlayer1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
private:	// User declarations
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
