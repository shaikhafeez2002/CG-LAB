#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main ()
{
    int gd=DETECT,gm;
    int x1,x2,y1,y2,x,y,p,dx,dy,run;
    do
    {
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the value of (x1,y1)\n==> ");
    scanf("%d%d",&x1,&y1);
    printf("Enter the value of (x2,y2)\n==> ");
    scanf("%d%d",&x2,&y2);
    setcolor(YELLOW);
    outtextxy(x1-60,y1-40,"***BLA WITH SLOPES NEGATIVE AND GREATERT THAN 1***");
    setcolor(RED);
    outtextxy(x1-10,y1-10,"(x1,y1)");
    outtextxy(x2-70,y2+10,"(x2,y2)");

    dx=(x2-x1);
    dy=(y2-y1);
    p=2*dx-dy;

    x=x1;
    y=y1;

    while(y<y2)
    {
      putpixel(x,y,2);
      y=y+1;
      if(p <= 0)
	{
	 p=p+2*dx-2*dy;
	 x=x-1;
	}
      else
      {
	p=p+2*dx;
      }
      delay(50);
    }
    getch();
    closegraph();
    printf("PRESS [1] TO DRAW ANOTHER LINE OR [0] TO EXIT\n==> ");
    scanf("%d",&run);
    }while(run == 1);
}


