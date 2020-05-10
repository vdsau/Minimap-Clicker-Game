//---------------------------------------------------------------------------

#ifndef main_codeH
#define main_codeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include"classes.h"
#include"settings_form.h"
#include <Menus.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class Tmain : public TForm
{
__published:	// IDE-managed Components
        TImage *Image1;
        TListBox *ListBox1;
        TSpeedButton *SpeedButton1;
        void __fastcall Image1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tmain(TComponent* Owner);
        mini_map *play;
        int max_click;//максимальное количество кликов
};
//---------------------------------------------------------------------------
extern PACKAGE Tmain *main;
//---------------------------------------------------------------------------
#endif
