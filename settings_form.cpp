//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "settings_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tsettings *settings;
//---------------------------------------------------------------------------
__fastcall Tsettings::Tsettings(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tsettings::mapsChange(TObject *Sender)
{
switch(maps->ItemIndex)
{
        case 0:
        map_image->Picture->LoadFromFile("�����/prokhorovka.bmp");
        mp="�����/prokhorovka.bmp";
        break;
        case 1:
        map_image->Picture->LoadFromFile("�����/malinovka.bmp");
         mp="�����/malinovka.bmp";
        break;
        case 2:
        map_image->Picture->LoadFromFile("�����/top.bmp");
         mp="�����/top.bmp";
        break;
        case 3:
        map_image->Picture->LoadFromFile("�����/lassvill.bmp");
         mp="�����/lassvill.bmp";
        break;
}
}
//---------------------------------------------------------------------------
