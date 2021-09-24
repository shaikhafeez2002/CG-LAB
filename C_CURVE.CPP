#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
struct point{
  double x;
  double y;
  }p;

void c_curve(struct point p,double len,double angle,int n);

void main()
{
  int gd=DETECT,gm;
  int n,run=1;
  double l,a;
  while(run==1)
  {
     run=0;
     printf("enter the order of c_curve value");
     scanf("%d",&n);
     p.x=200;
     p.y=200;
     l=100;
     a=0;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     c_curve(p,l,a,n);
     getch();
     closegraph();
     printf("to run again press 1");
     scanf("%d",&run);
  }
}

 void c_curve(struct point p,double len,double angle,int n)
{
     double m=3.14159;
     double theta=m/180;
     if(n>1)
     {
       len/=sqrt(2);
       c_curve(p,len,angle+45,n-1);
       p.x+=len*cos(theta*(angle+45));
       p.y+=len*sin(theta*(angle+45));
       c_curve(p,len,angle-45,n-1);
     }
     else
     {
	line(p.x,p.y,p.x+len*cos(theta*(angle)),p.y+len*sin(theta*(angle)));
     }

}


