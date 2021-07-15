#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>

void main()
{
    int gd=DETECT,gm;
    int x,y,r,h,k,x1,run;
    do
    {
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the center (h,k)\n==> ");
    scanf("%d%d",&h,&k);
    printf("Enter the radius of the circle\n==> ");
    scanf("%d",&r);
    setcolor(YELLOW);
    outtextxy(h-130,k+130,"*** POLYNOMIAL METHOD TO DRAW CIRCLE ***");
    x=0;
    y=r;
    x1=r/sqrt(2);
    while(x<=x1)
    {
       y=sqrt(r*r-x*x);
       putpixel(x+h,y+k,RED);
       putpixel(x+h,-y+k,YELLOW);
       putpixel(-x+h,y+k,GREEN);
       putpixel(-x+h,-y+k,RED);
       putpixel(y+h,x+k,WHITE);
       putpixel(y+h,-x+k,LIGHTGREEN);
       putpixel(-y+h,x+k,CYAN);
       putpixel(-y+h,-x+k,BLUE);
       delay(50);
       x=x+1;
    }
    setcolor(CYAN);
    line(h,k+r,h,k);
    setcolor(RED);
    outtextxy(h-3,k-3,"*(h,k)");
    getch();
    closegraph();
    printf("PRESS [1] to draw the circle or [0] to EXIT\n==> ");
    scanf("%d",&run);
    }while(run ==1);
}







