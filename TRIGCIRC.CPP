#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
void main()
{
 int x,y,x1,y1,r,h,k,theta,run;
 int gd=DETECT,gm;
 do
 {
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 float n=3.14159;
 n=n/180;
 printf("Enter the center (h,k)\n==> ");
 scanf("%d%d",&h,&k);
 printf("Enter the radius\n==> ");
 scanf("%d",&r);
 setcolor(YELLOW);
 outtextxy(h-130,k+130,"***TRIGONOMETRIC METHOD TO DRAW CIRCLE***");
 for(theta=0;theta<=45;theta++)
 {
    x1=r*cos(theta*n);
    y1=r*sin(theta*n);
    x=abs(x1);
    y=abs(y1);
    putpixel(x+h,y+k,RED);
    putpixel(x+h,-y+k,YELLOW);
    putpixel(-x+h,y+k,CYAN);
    putpixel(-x+h,-y+k,BLUE);
    putpixel(y+h,x+k,RED);
    putpixel(y+h,-x+k,GREEN);
    putpixel(-y+h,x+k,LIGHTGREEN);
    putpixel(-y+h,-x+k,YELLOW);
    delay(150);
 }
   setcolor(CYAN);
   line(h,k+r,h,k);
   setcolor(RED);
   outtextxy(h-3,k-3,"*(h,k)");
   getch();
   closegraph();
   printf("PRESS [1] TO DRAW ANOTHER CIRCLE AND [0] TO EXIT\n==> ");
   scanf("%d",&run);
 }while(run == 1);
}