#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
 void drawpixel(int x, int y, int h, int k)
 {
     putpixel(x+h, y+k, YELLOW);
     putpixel(y+h, x+k, CYAN);
     putpixel(y+h, -x+k, YELLOW);
     putpixel(x+h, -y+k, CYAN);
     putpixel(-x+h, y+k, YELLOW);
     putpixel(-y+h, x+k, CYAN);
     putpixel(-y+h, -x+k, YELLOW);
     putpixel(-x+h, -y+k, CYAN);

 }

 void main()
 {
     int gd=DETECT,gm;
     int x,y,d,h,k,r;
     initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

     printf("\n\nEnter the Coordinates of the Center:\n");
     scanf("%d%d", &h, &k);
     printf("\n\nEnter the Radius of the Circle:");
     scanf("%d", &r);
     d= 1-r;
     x=0;
     y=r;
     while(x<=y)
     {
	 drawpixel(x,y,h,k);
	 if(d<0)
	 {
	     d= d+2*x+3;
	     x=x+1;
	     y=y ;
	 }
	 else
	 {
	     d=d+2*(x-y)+5;
	     x=x+1;
	     y=y-1;
	     }
	 }
	 getch();
	 closegraph();

     }