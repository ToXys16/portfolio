//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
 char p1,p2,p3,p4,p5,p6,p7,p8,p9;


char kto;

void sprawdz()
{
   if ((p1==p2 && p2==p3 && p1!='n') ||
      (p4==p5 && p5==p6 && p4!='n') ||
      (p7==p8 && p8==p9 && p7!='n') ||
      (p1==p4 && p4==p7 && p1!='n') ||
      (p2==p5 && p5==p8 && p2!='n') ||
      (p3==p6 && p6==p9 && p3!='n') ||
      (p1==p5 && p5==p9 && p1!='n') ||
      (p3==p5 && p5==p7 && p3!='n'))
      {
          char * w;

          if (kto=='x') w="Wygrywa k�ko!!!";
         else w="Wygrywa krzy�yk!!!";


         Application->MessageBox(w, "Koniec gry!", MB_OK);

       }


}

//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)







{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button2Click(TObject *Sender)
{
 Form4->Close();        
}

//---------------------------------------------------------------------------

void __fastcall TForm4::FormCreate(TObject *Sender)
{



pole2 ->Picture->LoadFromFile("img/nic.bmp");
  Pole1->Picture->LoadFromFile("img/nic.bmp");
  pole3->Picture->LoadFromFile("img/nic.bmp");
  pole4->Picture->LoadFromFile("img/nic.bmp");
  pole5->Picture->LoadFromFile("img/nic.bmp");
  pole6->Picture->LoadFromFile("img/nic.bmp");
  pole7->Picture->LoadFromFile("img/nic.bmp");
  pole8->Picture->LoadFromFile("img/nic.bmp");
  pole9->Picture->LoadFromFile("img/nic.bmp");
  Image1->Picture->LoadFromFile("img/osmall.bmp");


  p1='n'; p5='n';
  p2='n'; p6='n';
  p3='n'; p7='n';
  p4='n'; p8='n';
  p9='n'; kto='o';

  Pole1->Enabled=true;
  pole2->Enabled=true;
  pole3->Enabled=true;
  pole4->Enabled=true;
  pole5->Enabled=true;
  pole6->Enabled=true;
  pole7->Enabled=true;
  pole8->Enabled=true;
  pole9->Enabled=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm4::Pole1Click(TObject *Sender)
{

if (p1=='n')
{
    if(kto=='o')
    {
      Pole1->Picture->LoadFromFile("img/o.bmp");
      p1='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        Pole1->Picture->LoadFromFile("img/x.bmp");
      p1='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             Pole1->Enabled=false;
             sprawdz();
}


}
void __fastcall TForm4::pole2Click(TObject *Sender)
{
 if (p2=='n')
{
    if(kto=='o')
    {
      pole2->Picture->LoadFromFile("img/o.bmp");
      p2='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        pole2->Picture->LoadFromFile("img/x.bmp");
      p2='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             pole2->Enabled=false;
             sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::pole3Click(TObject *Sender)
{
if (p3=='n')
{
    if(kto=='o')
    {
      pole3->Picture->LoadFromFile("img/o.bmp");
      p3='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        pole3->Picture->LoadFromFile("img/x.bmp");
      p3='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             pole3->Enabled=false;
             sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::pole4Click(TObject *Sender)
{
if (p4=='n')
{
    if(kto=='o')
    {
      pole4->Picture->LoadFromFile("img/o.bmp");
      p4='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        pole4->Picture->LoadFromFile("img/x.bmp");
      p4='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             pole4->Enabled=false;
             sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::pole5Click(TObject *Sender)
{
if (p5=='n')
{
    if(kto=='o')
    {
      pole5->Picture->LoadFromFile("img/o.bmp");
      p5='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        pole5->Picture->LoadFromFile("img/x.bmp");
      p5='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             pole5->Enabled=false;
             sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::pole6Click(TObject *Sender)
{
if (p6=='n')
{
    if(kto=='o')
    {
      pole6->Picture->LoadFromFile("img/o.bmp");
      p6='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        pole6->Picture->LoadFromFile("img/x.bmp");
      p6='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             pole6->Enabled=false;
             sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::pole7Click(TObject *Sender)
{
if (p7=='n')
{
    if(kto=='o')
    {
      pole7->Picture->LoadFromFile("img/o.bmp");
      p7='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        pole7->Picture->LoadFromFile("img/x.bmp");
      p7='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             pole7->Enabled=false;
             sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::pole8Click(TObject *Sender)
{
if (p8=='n')
{
    if(kto=='o')
    {
      pole8->Picture->LoadFromFile("img/o.bmp");
      p8='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        pole8->Picture->LoadFromFile("img/x.bmp");
      p8='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             pole8->Enabled=false;
             sprawdz();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::pole9Click(TObject *Sender)
{
if (p9=='n')
{
    if(kto=='o')
    {
      pole9->Picture->LoadFromFile("img/o.bmp");
      p9='o';
      kto='x';
      Image1->Picture->LoadFromFile("img/xsmall.bmp");

    }
     else
      {
        pole9->Picture->LoadFromFile("img/x.bmp");
      p9='x';
      kto='o';
      Image1->Picture->LoadFromFile("img/osmall.bmp");
      }
             pole9->Enabled=false;
             sprawdz();
}
}
//---------------------------------------------------------------------------
