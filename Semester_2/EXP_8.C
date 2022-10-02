#include<stdio.h>
#include<conio.h>

void main()
{
	int n ;
	clrscr() ;

	printf("Name: your name here \n Roll number: your roll no.") ;

	printf("\n\nEnter any number:\t") ;
	scanf("%d", &n) ;

	if(n<=0)
		printf("Invalid Input!") ;

	else
	{
		if(n%2 == 0)
			printf("\nThe input number is EVEN") ;

		else
			printf("\nThe input number is ODD") ;
	}
	getch() ;
}