//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TImage *Pole1;
        TImage *pole2;
        TImage *pole3;
        TImage *pole4;
        TImage *pole5;
        TImage *pole6;
        TImage *pole7;
        TImage *pole8;
        TImage *pole9;
        TLabel *Label1;
        TImage *Image1;
        TButton *Button1;
        TButton *Button2;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Pole1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall pole2Click(TObject *Sender);
        void __fastcall pole3Click(TObject *Sender);
        void __fastcall pole4Click(TObject *Sender);
        void __fastcall pole5Click(TObject *Sender);
        void __fastcall pole6Click(TObject *Sender);
        void __fastcall pole7Click(TObject *Sender);
        void __fastcall pole8Click(TObject *Sender);
        void __fastcall pole9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
