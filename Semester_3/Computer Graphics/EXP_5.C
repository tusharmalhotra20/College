#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
 void drawpixel(int x, int y, int h, int k)
 {
     putpixel(x+h, y+k, WHITE);
     putpixel(y+h, x+k, WHITE);
     putpixel(y+h, -x+k, WHITE);
     putpixel(x+h, -y+k, WHITE);
     putpixel(-x+h, y+k, WHITE);
     putpixel(-y+h, x+k, WHITE);
     putpixel(-y+h, -x+k, WHITE);
     putpixel(-x+h, -y+k, WHITE);

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
     d=3-(2*r);
     x=0;
     y=r;
     while(x<=y)
     {
	 drawpixel(x,y,h,k);
	 if(d<0)
	 {
	     d=d+4*(x)+6;
	     x=x+1;
	 }
	 else
	 {
	     d=d+4*(x-y)+10;
	     x=x+1;
	     y=y-1;
	     }
         }
         getch();
	 closegraph();
         
     }