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
TImage *pf; //������� ����
struct cell//������
{
        AnsiString name;//�������� ������
        bool blink;//������ ������ ��� ���
        TRect layout;//���������� ������
};
struct pair //��� �������� ���������
{
        int x;
        int y;
};
double width,height,begin_x,begin_y,full_height,full_width;
cell mm[10][10];
void blink(int &x,int &y);//������� ������
void rect(TRect &rec);
public:
mini_map(TImage *field);
AnsiString out(int &x,int &y);//"�������� �� �������"
void draw();//���������� �����
void redraw(TImage *im);//������������ ����� �� �������� �����
pair check(int &x,int &y);
};
#endif
