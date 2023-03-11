#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int x,y;
int hk=DETECT,gm;
initgraph(&hk,&gm,"C://TURBOC3//BGI");

x=getmaxx()/2;
setcolor(GREEN);
outtextxy(x,100,"SMILE");
setcolor(YELLOW);
circle(340,200,60);
setcolor(RED);
circle(310,180,9);
circle(365,180,9);
arc(339,210,180,360,20);
getch();
closegraph();
}
