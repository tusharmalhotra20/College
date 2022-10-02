#include<stdio.h>
#include<conio.h>
void main()
{
	float p, r, t, i ;
	clrscr() ;

	printf("Name: your name \n Roll number: your roll no") ;

	printf("\n\nEnter Principle amount:\t") ;
	scanf("%f", &p) ;

	printf("\nEnter Rate:\t") ;
	scanf("%f", &r) ;

	printf("\nEnter Time:\t") ;
	scanf("%f", &t) ;

	if((p <=0) || (r <=0) || (t <=0))
	{
		printf("\nInvalid Input!") ;
	}

	else
	{
		i = (p*r*t)/100 ;
		printf("\nSimple Interest is:\t%f", i) ;
	}
	getch() ;
}