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
        map_image->Picture->LoadFromFile("Карты/prokhorovka.bmp");
        mp="Карты/prokhorovka.bmp";
        break;
        case 1:
        map_image->Picture->LoadFromFile("Карты/malinovka.bmp");
         mp="Карты/malinovka.bmp";
        break;
        case 2:
        map_image->Picture->LoadFromFile("Карты/top.bmp");
         mp="Карты/top.bmp";
        break;
        case 3:
        map_image->Picture->LoadFromFile("Карты/lassvill.bmp");
         mp="Карты/lassvill.bmp";
        break;
}
}
//---------------------------------------------------------------------------
