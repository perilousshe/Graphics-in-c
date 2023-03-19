#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int i;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C://TURBOC3//BGI");
 outtextxy(297,100,"RAINBOW");
 for(i=1;i<50;i++)
 {
  setcolor(i);
  arc(320,250,0,180,70+i);
 }
getch();
closegraph();
}
