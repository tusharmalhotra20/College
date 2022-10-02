#include<stdio.h>
#include<conio.h>
void main()
{
	float l, b, ar ;
	clrscr() ;

	printf("Name: your name here \n Roll number: your roll no.") ;

	printf("\n\nEnter length of Rectangle:\t") ;
	scanf("%f", &l) ;

	printf("\nEnter breadth of Rectangle:\t") ;
	scanf("%f", &b) ;

	if(l <=0 || b<=0)
	{
		printf("Invalid Input!") ;
	}

	else
	{
		ar = l*b ;

		printf("\nArea of Rectangle is:\t%f", ar) ;
	}

	getch() ;
}