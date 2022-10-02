#include<stdio.h>
#include<conio.h>
void main()
{
	 int a, b, x ;
	 clrscr();

	 printf("Name: Your name here\n Roll Number: your roll no. \n\n");

	 printf("Enter first number:\t");
	 scanf("%d",&a) ;

	 printf("Enter second number:\t") ;
	 scanf("%d",&b);

	 x = a>b ? a : b ;

	 printf("\n\nLargest number is :\t%d",x) ;

	 getch();
}