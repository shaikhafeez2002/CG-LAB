#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main ()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x,y,p,dx,dy,run;
    do
    {
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the value of(x1,y1)\n==> ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the value of (x2,y2)\n==> ");
    scanf("%d %d",&x2,&y2);
    setcolor(YELLOW);
    outtextxy(x2-90,y2+40,"***BLA WITH SLOPES POSITIVE AND GREATER THAN 1***");
    setcolor(RED);
    outtextxy(x1-15,y1-15,"(x1,y1)");
    dx=(x2-x1);
    dy=(y2-y1);
    p=2*dx-dy;

    x=x1;
    y=y1;

    while(y<y2)
    {
       putpixel(x,y,2);
       y=y+1;
       if(p>=0)
	 {
	    p=p+2*dx-2*dy;

	    x=x+1;
	 }
       else
	 {
	    p=p+2*dx;
	 }
       delay(50);
    }
     outtextxy(x2+5,y2+5,"(x2,y2)");
     getch();
     closegraph();
     printf("PRESS [1] to draw another line or [0] to EXIT\n==> ");
     scanf("%d",&run);
     }while(run ==1);
}