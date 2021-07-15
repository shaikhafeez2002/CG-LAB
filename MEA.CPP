#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main ()
{
    int gd=DETECT,gm;
    float a,b,x,y,h,k,p1,p2,dx,dy;
    int run;
    do
    {
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    printf("Enter the value of h and k\n==> ");
    scanf("%f%f",&h,&k);
    printf("Enter the length of major axis and minor axis\n==> ");
    scanf("%f%f",&a,&b);
    setcolor(YELLOW);
    outtextxy(h-130,k+130,"***MID-POINT ELLIPSE ALGORITHM***");
  //REGION 1

    x=0;
    y=b;

    p1=(b*b)-(a*a*b)+((a*a)/4);
    dx=2*b*b*x;
    dy=2*a*a*y;

  while(dx <dy)
  {
    putpixel(x+h,y+k,2);
    putpixel(-x+h,y+k,2);
    putpixel(x+h,-y+k,2);
    putpixel(-x+h,-y+k,2);
    if(p1 >= 0)
      {
	 x=x+1;
	 y=y-1;
	 dx=dx+2*b*b;
	 dy=dy-2*a*a;
	 p1=p1+dx-dy+(b*b);
      }
    else
      {
	  x=x+1;
	  dx=dx+2*b*b;
	  p1=p1+dx+b*b;
      }
      delay(50);
 }
 //REGION 2
 p2=((b*b)*((x+0.5)*(x+0.5)))+((a*a)*((y-1)*(y-1)))-(a*a*b*b);
 while( y>=0)
 {
   putpixel(x+h,y+k,2);
   putpixel(-x+h,y+k,2);
   putpixel(x+h,-y+k,2);
   putpixel(-x+h,-y+k,2);
   if(p2 <= 0)
   {
    x=x+1;
    y=y-1;
    dy=dy-2*a*a;
    dx=dx+2*b*b;
    p2=p2+dx-dy+(a*a);
   }
   else
   {
    y=y-1;
    dy=dy-2*a*a;
    p2=p2-dy+(a*a);
   }
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
}while(run == 1 );

}