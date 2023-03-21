#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int x,y,i;
int hk=DETECT,gm;
initgraph(&hk,&gm,"C://TURBOC3//BGI");
x=getmaxx()/2;
outtextxy(x,100,"BUS");
for(i=0;i<500;i++)
{
clearviewport();
setcolor(BLUE);
rectangle(90+i,270,250+i,400);
setcolor(GREEN);
rectangle(190+i,270,250+i,350);
setcolor(YELLOW);
circle(250+i,400,10);
circle(90+i,400,10);
setcolor(RED);
line(0,410,1000,410);
delay(3);
}
getch();
closegraph();
}
