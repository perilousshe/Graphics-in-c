#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x,y;
int hk=DETECT,gm;
initgraph(&hk,&gm,"C://TURBOC3//BGI");
x=getmaxx()/2;
outtextxy(x,100,"BUS");
setcolor(BLUE);
rectangle(90,270,250,400);
setcolor(GREEN);
rectangle(190,270,250,350);

setcolor(YELLOW);
circle(250,400,10);
circle(90,400,10);
setcolor(RED);
line(0,410,1000,410);
getch();
closegraph();
}
