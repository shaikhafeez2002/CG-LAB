#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main()
{
    int gd=DETECT,gm,i,run;
    float x,y,dx,dy,step,x1,x2,y1,y2;
    do
  {
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("enter the value of (x1,y1)\n==> ");
    scanf("%f %f",&x1,&y1);
    printf("enter the value of (x2,y2)\n==> ");
    scanf("%f %f",&x2,&y2);
    setcolor(YELLOW);
    outtextxy(x2-90,y2+40,"*** DDA LINE ALGORITHM ***");
    setcolor(RED);
    outtextxy(x1-15,y1-15,"(x1,y1)");
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if(dx>=dy)
    {
      step=dx;
    }
    else
    {
       step=dy;
    }

    dx=dx/step;
    dy=dy/step;

    x=x1;
    y=y1;
    for(i=1;i<=step;i++)
    {
      putpixel(x,y,CYAN);
      x=x+dx;
      y=y+dy;
      delay(100);
    }
    outtextxy(x2+5,y2+5,"(x2,y2)");
    getch();
    closegraph();
    printf("PRESS [1] TO DRAW ANOTHER LINE OR [0] TO EXIT\n==>  ");
    scanf("%d",&run);
   }while(run == 1);
 }
