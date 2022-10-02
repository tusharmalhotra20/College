#include<stdio.h>
#include<conio.h>
void main()
{
	int n ;
	clrscr() ;

	printf("Name: your name here \n Roll number: your roll no.") ;

	printf("\n\nEnter any number:\t") ;
	scanf("%d", &n) ;

       if(n == 0)
		printf("\n\nThe input number is ZERO") ;

	else if(n<0)
		printf("\n\nThe input number is NEGATIVE") ;

	else if(n>0)
		printf("\n\nThe input number is POSITIVE") ;



	getch() ;
}

