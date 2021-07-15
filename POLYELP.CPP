#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>

void main()
{
   int gd=DETECT,gm;
   float h,k,a,b,run,x,y,l,z;
   do
   {
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   printf("Enter the center (h,k)\n==> ");
   scanf("%f%f",&h,&k);
   printf("Enter the length of major axis and minor axis\n==> ");
   scanf("%f%f",&a,&b);
   setcolor(YELLOW);
   outtextxy(h-130,k+130,"*** POLYNOMIAL METHOD FOR ELLIPSE ***");

   x=0;
   y=b;

   while(x <= a)
   {
      l=(1-((x*x)/(a*a)));
      if(l < 0)
      {
	z=-l;
      }
      else
      {
	z=l;
      }
      y=b*sqrt(z);
      putpixel(x+h,y+k,2);
      putpixel(-x+h,y+k,2);
      putpixel(x+h,-y+k,2);
      putpixel(-x+h,-y+k,2);
      delay(50);
      x=x+1;
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
   }while (run == 1);
}





