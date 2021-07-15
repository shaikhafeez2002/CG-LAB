#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main ()
{
    int gd=DETECT,gm;
    int h,k,a,b,theta,x1,y1,x,y,run;
    float n= 3.14159;
    do
    {
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    n=n/180;
    printf("enter the center (h,k)\n==> ");
    scanf("%d%d",&h,&k);
    printf("Enter the major axis and minor axis\n==> ");
    scanf("%d%d",&a,&b);
    setcolor(YELLOW);
    outtextxy(h-130,k+130,"*** TRIGONOMETRIC METHOD TO DRAW ELLIPSE ***");
    for(theta=0;theta<=90;theta++)
    {
       x1=a*cos(theta*n);
       y1=b*sin(theta*n);
       x=abs(x1);
       y=abs(y1);
       putpixel(x+h,y+k,2);
       putpixel(-x+h,y+k,2);
       putpixel(x+h,-y+k,2);
       putpixel(-x+h,-y+k,2);
       delay(50);
}
  setcolor(CYAN);
  line(h+a,k,h-a,k);
  line(h,k+b,h,k-b);
  setcolor(RED);
  outtextxy(h-3,k-3,"*");
  outtextxy(h,k+5,"(h,k)");
  getch();
  closegraph();
  printf("PRESS [1] TO DRAW ANOTHER ELLIPSE OR [0] TO EXIT\n==> ");
  scanf("%d",&run);
  }while(run == 1);
}

