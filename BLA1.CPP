#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
    int gd=DETECT,gm;
    int x,y,x1,x2,y1,y2,dx,dy,p,run;
    do
    {
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("enter the value of (x1,y1)\n==> ");
    scanf("%d %d",&x1,&y1);
    printf("enter the value of (x2,y2)\n==> ");
    scanf("%d %d",&x2,&y2);
    setcolor(YELLOW);
    outtextxy(x1-90,y1+40,"***BLA WITH SLOPES NEGATIVE AND LESS THAN 1***");
    setcolor(RED);
    outtextxy(x1+5,y1+5,"(x1,y1)");
    outtextxy(x1+45,y1-110,"(x2,y2)");

    dx=(x2-x1);
    dy=(y2-y1);

    p=2*dy-dx;

    x=x1;
    y=y1;

    while(x < x2)
    {
       putpixel(x,y,2);
       x=x+1;
       if(p <= 0)
       {
	  p=p+2*dy-2*dx;
	  y=y-1;
       }
       else
       {
	  p=p+2*dy;
       }
       delay(50);
    }
    getch();
    closegraph();
    printf("PRESS [1] TO DRAW ANOTHER LINE OR [0] TO EXIT\n==>  ");
    scanf("%d",&run);
   }while(run == 1);
}