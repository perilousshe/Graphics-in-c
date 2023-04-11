#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm;
  int x,y,i=1,z,p;
  initgraph(&gd,&gm,"C://TURBOC3//BGI");
  x=getmaxx()/2;
  y=getmaxy()/2;
  while(!kbhit())
  {
  setcolor(1);
  circle(x,y,40+i);
  setcolor(2);
  circle(x,y,50+i);
  setcolor(YELLOW);
  circle(x,y,60+i);
  setcolor(1);
  circle(x,y,70+i);
  setcolor(0);
  circle(x,y,80+i);
  i++;
  delay(50);
  }
  getch();
  closegraph();
}
