#include<stdio.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<graphics.h>
#include<stdlib.h>

int gd=DETECT,gm;
void drawline(int x1,int y1,int x2,int y2,int x3,int y3);
void drawxy();
void mltmatrix(float arr[3][3],float arr1[3][3],float arr2[3][3]);

void main()
{
 clrscr();
 int gd=DETECT,gm,choice;
	char cho;
	int xmax,ymax;
	int x1,x2,x3,y1,y2,y3;
	float a,b;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	xmax=getmaxx();
	ymax=getmaxy();
	closegraph();
	printf("enter the coordinates of triangle(x coordinates<%d)\t",xmax/2);
	scanf("%d%d%d",&x1,&x2,&x3);
	printf("\nenter the coordinates of triangle(y coordinates<%d)\t",ymax/2);
	scanf("%d%d%d",&y1,&y2,&y3);
	a:
	float arr[3][3]={{x1,x2,x3},{y1,y2,y3},{1,1,1}};
	float arr1[3][3]={{1,0,xmax/2},{0,1,ymax/2},{0,0,1}};
	float arr2[3][3]={{1,0,0},{0,1,0},{0,0,1}};

		float t[3][3]={{1,0,x1+xmax/2},{0,1,y1+ymax/2},{0,0,1}};
		int x;
		printf("Enter angle:");
		scanf("%d",&x);
		double d=(x*3.14)/180;
		float t1[3][3]={{1,0,-x1},{0,1,-y1},{0,0,1}};

		arr2[0][0]=(cos(d));
		arr2[0][1]=-sin(d);
		arr2[1][0]=sin(d);
		arr2[1][1]=cos(d);

		float l[3][3],f[3][3],z[3][3],at[3][3];
		mltmatrix(arr2,t1,l);
		mltmatrix(t,l,z);
	    //	mltmatrix(arr1,arr2,z);
		mltmatrix(z,arr,f);

		initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
		drawxy();
		printf("%f",arr2[0][0]);
		mltmatrix(arr1,arr,at);
		setcolor(WHITE);
		drawline(at[0][0],at[1][0],at[0][1],at[1][1],at[0][2],at[1][2]);
		setcolor(GREEN);
		drawline(f[0][0],f[1][0],f[0][1],f[1][1],f[0][2],f[1][2]);
		getch();




	cout<<"DO you want to continue (Y/N)";
	cin>>cho;
	if(cho=='y'||cho=='Y')
		goto a;
	else
		exit(0);

}
void drawline(int x1,int y1,int x2,int y2,int x3,int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
//for multipying two matrices arr and arr1
void mltmatrix(float arr[3][3],float ar1[3][3],float res[3][3])
{
	int i ,j,k;
	float sum=0;
	for(i=0;i<3;i++)
	{
		for(k=0;k<3;k++)
		{
			for(j=0;j<3;++j)
			{
				sum+=arr[i][j]*ar1[j][k];
			}
			res[i][k]=sum;
			sum=0;
		}
	}
}
void drawxy()
{

	int xmax=getmaxx();
	int ymax=getmaxy();
	line(0,ymax/2,xmax,ymax/2);
	line(0,0,0,ymax);
	line(xmax,0,xmax,ymax);
	line(xmax/2,0,xmax/2,ymax);

}