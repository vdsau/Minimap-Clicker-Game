//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main_code.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tmain *main;
//---------------------------------------------------------------------------
__fastcall Tmain::Tmain(TComponent* Owner)
        : TForm(Owner)
{
play=new mini_map(Image1);
play->draw();
max_click=100;//значение по умолчаию
}
//---------------------------------------------------------------------------

void __fastcall Tmain::Image1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
int i=0;
if(ListBox1->Count==max_click)
{
        ShowMessage("\"Мышь\" не вечная!");
}
else
{
        ListBox1->Items->Add(play->out(X,Y));
        i=ListBox1->Count;
        i--;
        ListBox1->Selected[i]=true;
        if(ListBox1->Count==max_click/4)
        {
                ShowMessage("Не надоело?!");
        }
        if(ListBox1->Count==max_click/2)
        {
                   ShowMessage("Сколько можно кликать?!");
        }
}
}
//---------------------------------------------------------------------------


void __fastcall Tmain::SpeedButton1Click(TObject *Sender)
{
if(settings->ShowModal()==mrOk)
{
        ListBox1->Clear();
        max_click=settings->clicks->Text.ToInt();
        Image1->Picture->LoadFromFile(settings->mp);
        play->redraw(Image1);
}
}
//---------------------------------------------------------------------------

