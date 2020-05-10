//---------------------------------------------------------------------------


#pragma hdrstop

#include "classes.h"

//---------------------------------------------------------------------------
mini_map::mini_map(TImage *field)
{
pf=field;
full_width=pf->Width;//ширина Image
full_height=pf->Height;//Высота Image
width=pf->Width/10;  //ширина 1 ячейки
height=pf->Height/10;//высота 1 ячейки
begin_x=73;//начальная точка по оси Х
begin_y=53;//начальная точка по оси У
pf->Canvas->MoveTo(begin_x,begin_y);//начальные координаты рисунка
TRect temp;
        for(int x=0;x<10;x++)
        for(int y=0;y<10;y++)
        {
              temp.left=begin_x+width*(x-1);
              temp.left++; //изменение координат,чтобы корректно выделяло ячейку
              temp.top=begin_y+height*(y-1);
              temp.top++;
              temp.right=begin_x+width*x;
              temp.right--;
              temp.bottom=begin_y+height*y;
              temp.bottom--;
              mm[x][y].blink=0;
                mm[x][0].name="A"+IntToStr(x+1);
                mm[x][1].name="B"+IntToStr(x+1);
                mm[x][2].name="C"+IntToStr(x+1);
                mm[x][3].name="D"+IntToStr(x+1);
                mm[x][4].name="E"+IntToStr(x+1);
                mm[x][5].name="F"+IntToStr(x+1);
                mm[x][6].name="G"+IntToStr(x+1);
                mm[x][7].name="H"+IntToStr(x+1);
                mm[x][8].name="J"+IntToStr(x+1);
                mm[x][9].name="K"+IntToStr(x+1);
              mm[x][y].layout=temp;
        }
}

//---------------------------------------------------------------

void mini_map::draw()
{
        pf->Canvas->Pen->Width=4;
        pf->Canvas->Pen->Color=clWhite;
       mvt(begin_x,0);
       lnt(begin_x,full_height);
       mvt(0,begin_y);
       lnt(full_width,begin_y);
       for(int i=0;i<100;i++)
       {
                mvt(begin_x+=width,0);
                lnt(begin_x,full_height);
                mvt(0,begin_y+=height);
                lnt(full_width,begin_y);
       }
}

//--------------------------------------------------------------------
void mini_map::redraw(TImage *im)
{
        pf=im;
        begin_x=73;//начальная точка по оси Х
        begin_y=53;//начальная точка по оси У
        draw();
}

//--------------------------------------------------------------------

mini_map::pair mini_map::check(int &x,int &y)
{
        pair lol;
        lol.x=0;
        lol.y=0;
        for(int ix=0;ix<10;ix++)
        for(int iy=0;iy<10;iy++)
        {
                if(x>mm[ix][iy].layout.left && x<mm[ix][iy].layout.right) //поиск по горизонтали
                {
                        if(y>mm[ix][iy].layout.top && y<mm[ix][iy].layout.bottom)//поиск по вертикали
                        {
                                lol.x=ix;
                                lol.y=iy;
                                mm[ix][iy].blink=true;
                        }
                }
        }
       return lol;
}

//---------------------------------------------------------------------

AnsiString mini_map::out(int &x,int &y)
{
        pair temp=check(x,y);
        return "Внимание на квадрат "+mm[temp.x][temp.y].name+"!";
}

//------------------------------------------------------------------------

void mini_map::blink(int &x,int &y)
{
        pair temp=check(x,y);
        for(int ix=0;ix<4;ix++)
        {
                if(mm[temp.x][temp.y].blink==true)
                {
                        for(int i=0;i<16;i++)
                        {
                                pf->Canvas->Pen->Width=i;
                                rect(mm[temp.x][temp.y].layout);
                        }
                        mm[temp.x][temp.y].blink=false;
                }
                if(mm[temp.x][temp.y].blink==false)
                {
                        for(int i=16;i!=0;i--)
                        {
                                pf->Canvas->Pen->Width=i;
                                 rect(mm[temp.x][temp.y].layout);
                        }
                        mm[temp.x][temp.y].blink=true;
                }
        }   
}

//--------------------------------------------------------------

void mini_map::rect(TRect &rec)
{
        mvt(rec.Left,rec.Top);
        lnt(rec.Right,rec.Top);
        lnt(rec.Right,rec.Bottom);
        lnt(rec.Left,rec.Bottom);
        lnt(rec.Left,rec.Top);
}
#pragma package(smart_init)
 