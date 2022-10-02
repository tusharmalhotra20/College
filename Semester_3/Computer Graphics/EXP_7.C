#include<graphics.h>
#include<stdio.h>
void main()
{
	int gd=DETECT,gm;

	int x1, y1, x2, y2, x, y;
	int a[4], b[4];
	int i,j;

	for(i=0;i<4;i++)
	{
		a[i]=0;
		b[i]=0;
	}

	printf("\nEnter the cordinates of the line:\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	x=getmaxx();
	y=getmaxy();

	if(y1<y/3) a[0]=1;

	if(y2<y/3) b[0]=1;

	if(y1>2*y/3) a[1]=1;

	if(y2>2*y/3) b[1]=1;

	if(x1>2*x/3) a[2]=1;

	if(x2>2*x/3) b[2]=1;

	if(x1<x/3) a[3]=1;

	if(x2<x/3) b[3]=1;

	printf("4-Bit code: %d%d%d%d of Point %d %d\n4-Bit code: %d%d%d%d of Point %d %d\n",a[0],a[1],a[2],a[3],x1,y1,b[0],b[1],b[1],b[3],x2,y2);

	line(x1, y1, x2, y2);

	line(0, y/3, x, y/3);

	line(0, 2*y/3, x, 2*y/3);

	line(x/3, 0, x/3, y);

	line(2*x/3, 0, 2*x/3, y);

	while(1)
	{
		if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && b[0]==0 &&
		b[1]==0 && b[2]==0 && b[3]==0)
		{
			printf("The line is inside the viewport!\n");
			break;
		}
		if(a[0]&b[0] || a[1]&b[1] || a[2]&b[2] || a[3]&b[3])
		{
			printf("The Line is outside the viewport!\n");
			break;
		}
		else
		{
			printf("The Line is a candidate for clipping!");
			break;
		}
	}
	getch();
	closegraph();
}