#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
 int x,y;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C://TURBOC3//BGI");
 while(!kbhit())
 {
  for(int i=0;i<30;i++)
  {
   x=rand()%getmaxx();
   y=rand()%getmaxy();
   putpixel(x,y,WHITE);
  }
  delay(500);
 }
 getch();
 closegraph();
}
