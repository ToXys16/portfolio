//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

AnsiString nazwapliku="";

char p1,p2,p3,p4,p5,p6,p7,p8,p9;


char kto;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Otwrz1Click(TObject *Sender)
{
    if (OpenDialog1->Execute())
    {
    try
    {
        Tresc->Lines->LoadFromFile(OpenDialog1->FileName);
        nazwapliku = OpenDialog1->FileName;

     }
      catch (...)
      {
         ShowMessage("Masz Problem. Ja szukam istniejacych plikow");
      }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
          if (SaveDialog1->Execute())
    {
    try
    {
        Tresc->Lines->SaveToFile(SaveDialog1->FileName);
        nazwapliku = SaveDialog1->FileName;
     }
      catch (...)
      {
         ShowMessage("Cosik zes zle zapisal bo ja nigdy nie popelniam bledow... Chyba");
      }
    }
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
if (nazwapliku!="")
{
 Tresc->Lines->SaveToFile(nazwapliku);


}

else
{
     Form1->Zapiszjako1Click(MainMenu1);
}



}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
    if(Application->MessageBoxA("Czy napewno chcesz to robic stworzyc nowy plik a stary co ze starym co o tobie pomysli. Ok rub jak chcesz decyzja nalerzy do ciebie );",
    "Potwierd�",MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES )
    {
     Tresc->Lines->Clear();
     nazwapliku="";

    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OnKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
   if (Shift.Contains(ssCtrl))
   {
    if ((Key == 's') || (Key == 'S'))
    {
     Form1->Zapisz1Click(MainMenu1);
    }

   }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{
 if(Application->MessageBoxA("Czy napewno chcesz to robic zako�czyc a notatnik co z notatnikiem co o tobie pomysla inni. Ok rub jak chcesz decyzja nalerzy do ciebie );",
    "Potwierd�",MB_YESNO | MB_ICONQUESTION) == IDYES )
    {
      Application->Terminate();

    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::OnClose(TObject *Sender, TCloseAction &Action)
{
             if(Application->MessageBoxA("Czy napewno chcesz to robic zako�czyc a notatnik co z notatnikiem co o tobie pomysla inni. Ok rub jak chcesz decyzja nalerzy do ciebie );",
    "Potwierd�",MB_YESNO | MB_ICONQUESTION) == IDNO )
    {
      Action=caNone;

    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Wytnij1Click(TObject *Sender)
{
   Tresc->CutToClipboard();                               
}
//---------------------------------------------------------------------------
void __fastcall TForm1::KopjujCtrlc1Click(TObject *Sender)
{
 Tresc->CopyToClipboard();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WklejCtrlV1Click(TObject *Sender)
{
 Tresc->PasteFromClipboard();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zawijaniewierszy1Click(TObject *Sender)
{
   if (Zawijaniewierszy1->Checked==true)
   {
    Zawijaniewierszy1->Checked=false;
    Tresc->WordWrap=false;
    Tresc->ScrollBars = ssBoth;
   }
   else
   {
   Zawijaniewierszy1->Checked=true;
    Tresc->WordWrap=true;
    Tresc->ScrollBars = ssVertical;
   }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::czcionka1Click(TObject *Sender)
{
     if (FontDialog1->Execute())
     {
      Tresc->Font->Name = FontDialog1->Font->Name;

      Tresc->Font->Color = FontDialog1->Font->Color;

      Tresc->Font->Size = FontDialog1->Font->Size;

      Tresc->Font->Style = FontDialog1->Font->Style;


     }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
  Form2->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ZapraszamnakursC1Click(TObject *Sender)
{
 ShellExecute(NULL,"open","https://miroslawzelent.pl/kurs-c++/",NULL,NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::OAutorze1Click(TObject *Sender)
{
   Form3->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::tictactoe1Click(TObject *Sender)
{
   Form4->ShowModal();
}
//---------------------------------------------------------------------------

