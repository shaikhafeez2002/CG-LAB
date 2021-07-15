#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void main()
{
 int gd=DETECT,gm;
 int  x,y,r,x1,y1,p,run;
 do
 {
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 printf("Enter the value of r\n==> ");
 scanf("%d",&r);
 printf("Enter the value of (x1,y1)\n==> ");
 scanf("%d%d",&x1,&y1);
 setcolor(YELLOW);
 outtextxy(x1-130,y1+130,"***MID-POINT CIRCLE DRAWING ALGORITHM***");
 x=0;
 y=r;
 p=(5/4)-r;
 while(x<y)
 {
    putpixel(x+x1,y+y1,RED);
    putpixel(x+x1,-y+y1,YELLOW);
    putpixel(-x+x1,-y+y1,GREEN);
    putpixel(-x+x1,y+y1,BLUE);
    putpixel(y+x1,x+y1,CYAN);
    putpixel(y+x1,-x+y1,WHITE);
    putpixel(-y+x1,-x+y1,RED);
    putpixel(-y+x1,x+y1,GREEN);
    delay(50);
    if(p<0)
    {
       p=p+2*x+3;
    }
    else
    {
      p=p+2*(x-y)+5;
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
  }while(run ==1);
 }
