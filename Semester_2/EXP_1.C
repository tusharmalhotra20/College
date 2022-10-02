#include<stdio.h>
#include<conio.h>

void main()
{
	float a, b, c ;
	clrscr() ;

	printf("\nName: Your Name \nRoll Number: your roll no.") ;

	printf("\n\nEnter first number:\t") ;
	scanf("%f", &a) ;

	printf("\nEnter second number:\t") ;
	scanf("%f", &b) ;

	c = a+b ;

	printf("\nSum:\t%f", c) ;

	getch() ;
}
