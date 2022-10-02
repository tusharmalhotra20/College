#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

int gd=DETECT,gm;
void drawline(int x1,int y1,int x2,int y2,int x3,int y3);
void drawxy();
void mltmatrix(int arr[3][3],int arr1[3][3],int arr2[3][3]);
void drawf(int arr[3][3],int arr1[3][3],int arr2[3][3]);

void main()
{
	int gd = DETECT, gm, ch ;
	char cho ;
	int xmax, ymax ;
	int x1, x2, x3, y1, y2, y3 ;
	float a, b ;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi") ;

	xmax = getmaxx() ;
	ymax = getmaxy() ;
	closegraph() ;

	printf("enter the coordinates of triangle(x coordinates<%d)\t",xmax/2);
	scanf("%d%d%d",&x1,&x2,&x3);
	printf("\nenter the coordinates of triangle(y coordinates<%d)\t",ymax/2);
	scanf("%d%d%d",&y1,&y2,&y3);

	while(1)
	{
	int arr[3][3]={{x1,x2,x3},{y1,y2,y3},{1,1,1}};
	int arr1[3][3]={{1,0,xmax/2},{0,1,ymax/2},{0,0,1}};
	int arr2[3][3]={{1,0,0},{0,1,0},{0,0,1}};

	    printf("\n1:TRANSLATION");
	    printf("\n2:SCALING");
	    printf("\n3:REFLECTION");
	    printf("\n4:SHEARING");
	    printf("\n5:EXIT");

	    printf("\n6:Enter your choice:\t") ;
	    scanf("%d", &ch);

	    switch (ch)
	    {
		case 1: printf("\n ENTER TX AND TY") ;
			scanf("%f%f", &a,&b) ;
			arr2[0][2]=a;
			arr2[1][2]=b;
			drawf(arr,arr1,arr2) ;
		break;

		case 2: printf("\n ENTER SX AND SY") ;
			scanf("%f%f", &a,&b) ;
			arr2[0][0]=a;
			arr2[1][1]=b;
			drawf(arr,arr1,arr2) ;
		break;

		case 3: arr2[0][0]=-1;
			drawf(arr,arr1,arr2) ;
			break ;

		case 4: printf("\n SHEARING FACTOR:\t") ;
			scanf("%f", &a) ;
			arr2[0][1]=a;
			drawf(arr,arr1,arr2);
		break;

		case 5:  exit(0) ;
		break ;
	    }
	}
}

void drawline(int x1,int y1,int x2,int y2,int x3,int y3)
{
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
}
//for multipying two matrices arr and arr1
void mltmatrix(int arr[3][3],int ar1[3][3],int res[3][3])
{
	int i ,j,k,sum=0;
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
void drawf(int arr[3][3],int arr1[3][3],int arr2[3][3])
{
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	drawxy();
	int f[3][3]={{1,0,0},{0,1,0},{0,0,1}},at[3][3]={{1,0,0},{0,1,0},{0,0,1}},res[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	mltmatrix(arr1,arr2,res);
	mltmatrix(res,arr,f);
	mltmatrix(arr1,arr,at);
	setcolor(WHITE);
	drawline(at[0][0],at[1][0],at[0][1],at[1][1],at[0][2],at[1][2]);
	setcolor(GREEN);
	drawline(f[0][0],f[1][0],f[0][1],f[1][1],f[0][2],f[1][2]);
	getch();
	closegraph();
}

