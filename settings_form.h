//---------------------------------------------------------------------------

#ifndef settings_formH
#define settings_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tsettings : public TForm
{
__published:	// IDE-managed Components
        TEdit *clicks;
        TLabel *Label1;
        TLabel *Label2;
        TComboBox *maps;
        TImage *map_image;
        TBitBtn *BitBtn1;
        void __fastcall mapsChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall Tsettings(TComponent* Owner);
        AnsiString mp;
};
//---------------------------------------------------------------------------
extern PACKAGE Tsettings *settings;
//---------------------------------------------------------------------------
#endif
