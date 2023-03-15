#include<graphics.h>
#include<conio.h>
void main()
{
int x,y;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C://TURBOC3//BGI");
setfillstyle(HATCH_FILL,RED);
x=getmaxx()/2;
y=getmaxy()/2;
circle(250,200,40);
circle(390,200,40);
circle(320,180,40);
circle(x,y,50);
circle(320,300,40);
circle(390,275,40);
circle(250,275,40);
floodfill(x,y,WHITE);
floodfill(250,200,WHITE);
floodfill(390,180,WHITE);
floodfill(320,180,WHITE);
floodfill(320,300,WHITE);
floodfill(390,275,WHITE);
floodfill(250,275,WHITE);
getch();
closegraph();
}
