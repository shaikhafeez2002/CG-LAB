#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void floodfill4(int x,int y,int fillcolor,int oldcolor)
{
       if(getpixel(x,y) == oldcolor)
       {
	   setcolor(fillcolor);
	   putpixel(x,y,fillcolor);
	   delay(5);
	   floodfill4(x+1,y,fillcolor,oldcolor);
	   floodfill4(x-1,y,fillcolor,oldcolor);
	   floodfill4(x,y+1,fillcolor,oldcolor);
	   floodfill4(x,y-1,fillcolor,oldcolor);
       }
}
void draw_rectangle()
{
   setcolor(15);
   rectangle(250,215,315,260);
   floodfill4(280,250,6,0);
   setcolor(RED);
   outtextxy(250,270,"RECTANGLE");
}

void draw_triangle()
{
   setcolor(15);
   line(140,250,90,310);
   line(140,250,200,310);
   line(90,310,200,310);
   floodfill4(140,290,5,0);
   setcolor(RED);
   outtextxy(110,320,"TRIANGLE");
}

void draw_circle()
{
   setcolor(15);
   circle(250,250,30);
   floodfill4(250,250,3,0);
   setcolor(RED);
   outtextxy(230,290,"CIRCLE");
}

void main()
{
   int gd=DETECT,gm,choice,run;
   do
   {
   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
   setcolor(YELLOW);
   outtextxy(250,20,"*** FLOOD FILL ALGORITHM ***");
   printf("    \n\n\n\n");
   printf("[1] TO FIIL A RECTANGLE\n");
   printf("[2] TO FILL A CIRCLE\n");
   printf("[3] TO FILL A TRIANGLE\n");
   printf("  \n\n");
   printf("ENTER YOUR CHOICE ==> ");
   scanf("%d",&choice);
   switch(choice)
   {
	case 1:draw_rectangle();
	       break;
	case 2:draw_triangle();
	       break;
	case 3:draw_circle();
	       break;
	default:printf("  \n\n\n SHAPE NOT AVAILABLE !!!");
		break;
   }
   getch();
   closegraph();
   printf("PRESS [1] TO DRAW AGAIN OR [0] TO EXIT ==> ");
   scanf("%d",&run);
   }while(run == 1);

}

