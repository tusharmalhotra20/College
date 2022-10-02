#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
	int gd=DETECT, gm, err;
	 initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	 err=graphresult();

	  if(err!=grOk)
	  {
		printf("Graphics error:%s\n", grapherrormsg(err));
		getch();
		exit(1);
	  }
	putpixel(100,100,WHITE);
	getch() ;
	closegraph();
}