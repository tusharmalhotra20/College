#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
	int gd=DETECT, gm, err, x;
	 initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	 err=graphresult();

	  if(err!=grOk)
	  {
		  printf("Graphics error:%s\n", grapherrormsg(err));
		  getch();
		  exit(1);
	  }
	for(x=1;x<=200;x++)
	putpixel(x,200,YELLOW);
	getch();
	closegraph();
	return 0;
}