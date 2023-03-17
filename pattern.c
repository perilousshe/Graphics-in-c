#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int i;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C://TURBOC3//BGI");
 for(i=1;i<=100;i++)
 {
   setcolor(i);
   circle(319,200-i,20+i);
   circle(319,200+i,20+i);
   circle(319-i,200,20+i);
   circle(319+i,200,20+i);
  delay(100);
 }
 getch();
 closegraph();
}
