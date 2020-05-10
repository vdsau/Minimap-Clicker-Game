//---------------------------------------------------------------------------

#ifndef classesH
#define classesH
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <vcl.h>

#define mvt(x,y) pf->Canvas->MoveTo(x,y)
#define lnt(x,y) pf->Canvas->LineTo(x,y)

//---------------------------------------------------------------------------
class mini_map
{
TImage *pf; //игровое поле
struct cell//€чейка
{
        AnsiString name;//название €чейки
        bool blink;//мигает €чейка или нет
        TRect layout;//координаты €чейки
};
struct pair //дл€ хранени€ координат
{
        int x;
        int y;
};
double width,height,begin_x,begin_y,full_height,full_width;
cell mm[10][10];
void blink(int &x,int &y);//мигание €чейки
void rect(TRect &rec);
public:
mini_map(TImage *field);
AnsiString out(int &x,int &y);//"¬нимание на квадрат"
void draw();//отрисовать сетку
void redraw(TImage *im);//перерисовать сетку на указнном имаге
pair check(int &x,int &y);
};
#endif
