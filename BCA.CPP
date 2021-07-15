#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
void main()
{
  int x,y,x1,y1,r,d,run;
  int gd=DETECT,gm;
  do
  {
  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  printf("Enter the value of r\n==> ");
  scanf("%d",&r);
  printf("Enter the value of (x1,y1)\n==> ");
  scanf("%d%d",&x1,&y1);
  setcolor(YELLOW);
  outtextxy(x1-130,y1+130,"*** BRESENHAM CIRCLE DRAWING ALGORITHM ***");
  x=0;
  y=r;
  d=(3-2*r);
  while(x<y)
  {
    putpixel(x+x1,y+y1,RED);
    putpixel(x+x1,-y+y1,CYAN);
    putpixel(-x+x1,-y+y1,YELLOW);
    putpixel(-x+x1,y+y1,GREEN);
    putpixel(y+x1,x+y1,BLUE);
    putpixel(y+x1,-x+y1,BROWN);
    putpixel(-y+x1,-x+y1,RED);
    putpixel(-y+x1,x+y1,WHITE);
    delay(50);
    if(d<0)
    {
       d=d+4*x+6;
    }
    else
    {
       d=d+4*(x-y)+10;
       y=y-1;
   }
   x=x+1;
  }
  setcolor(CYAN);
  line(x1,y1+r,x1,y1);
  setcolor(RED);
  outtextxy(x1-3,y1-3,"*(x1,y1)");
  getch();
  closegraph();
  printf("PRESS [1] to draw another circle or [0] to EXIT\n==> ");
  scanf("%d",&run);
  }while(run ==1 );
}