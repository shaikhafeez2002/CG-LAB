#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boundaryfill4(int x,int y,int f_color,int b_color)
   {
      if(getpixel(x,y)!= b_color && getpixel(x,y)!=f_color)
      {
	 putpixel(x,y,f_color);
	 delay(5);
	 boundaryfill4(x+1,y,f_color,b_color);
	 boundaryfill4(x,y+1,f_color,b_color);
	 boundaryfill4(x-1,y,f_color,b_color);
	 boundaryfill4(x,y-1,f_color,b_color);
      }
   }


void draw_rectangle()
{
  setcolor(15);
  rectangle(250,215,315,260);
  boundaryfill4(280,250,10,15);
  setcolor(RED);
  outtextxy(250,270,"RECTANGLE");
}

void draw_circle()
{
   setcolor(15);
   circle(250,250,30);
   boundaryfill4(250,250,3,15);
   setcolor(RED);
   outtextxy(230,290,"CIRCLE");
}
void draw_triangle()
{
   setcolor(15);
   line(140,250,90,310);
   line(140,250,200,310);
   line(90,310,200,310);
   boundaryfill4(140,290,5,15);
   setcolor(RED);
   outtextxy(110,320,"TRIANGLE");
}

void main()
{
     int gd=DETECT,gm,x,y,r,choice,run;
     do
     {
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setcolor(YELLOW);
    outtextxy(250,20,"*** BOUNDARY FILL ALGORITHM ***");
    printf("  \n\n\n");
    printf("[1] TO FILL A RECTANGLE\n");
    printf("[2] TO FILL A CIRCLE\n");
    printf("[3] TO FILL A TRIANGLE\n");
    printf(" \n\n");
    printf("ENTER YOUR CHOICE ==> ");
    scanf("%d",&choice);
     switch(choice)
     {
	 case 1: draw_rectangle();
		 break;
	 case 2: draw_circle();
		 break;
	 case 3: draw_triangle();
		 break;
	 default:
		printf("   \n\nSHAPE NOT AVAILABLE !!!");
		break;
     }
     getch();
     closegraph();
     printf("PRESS [1] TO DRAW AGAIN OR [0] TO EXIT ==> ");
     scanf("%d",&run);
     }while(run == 1);
}
