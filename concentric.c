#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int x,y;                            //Concentic Circles
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C://TURBOC3//BGI");

 x=getmaxx()/2;
 y=getmaxy()/2;
// printf("%d",x);
// printf("%d",y);
 outtextxy(259,100,"Concentric cirle");
 setcolor(RED);
 circle(x,y,50);
 setcolor(BLUE);
 circle(x,y,60);
 setcolor(GREEN);
 circle(x,y,70);
 setcolor(YELLOW);
 circle(x,y,80);
 setcolor(5);
 circle(x,y,90);
getch();
closegraph();
}
