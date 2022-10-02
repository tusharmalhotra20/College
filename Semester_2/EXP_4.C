#include<stdio.h>
#include<conio.h>
void main()
{

	float m1, m2, m3, m4, m5, avg, total ;
	clrscr() ;

	printf("") ;

	printf("\n\nEnter Marks for Subject 1:\t") ;
	scanf("%f", &m1) ;

	printf("\n\nEnter Marks for Subject 2:\t") ;
	scanf("%f", &m2) ;

	printf("\n\nEnter Marks for Subject 3:\t") ;
	scanf("%f", &m3) ;

	printf("\n\nEnter Marks for Subject 4:\t") ;
	scanf("%f", &m4) ;

	printf("\n\nEnter Marks for Subject 5:\t") ;
	scanf("%f", &m5) ;

	if((m1<=0 || m1 == 100) || ((m2<=0 || m2 == 100)) ||
	((m3<=0 || m3 == 100)) || ((m4<=0 || m4 == 100)) || ((m5<=0 || m5 == 100)))
	{
		printf("Invalid Input!") ;
	}

	else
	{
		total = m1+m2+m3+m4+m5 ;
		avg = total/5 ;

		printf("\nTotal marks:\t%f", total) ;
		printf("\nAverage Marks:\t%f", avg) ;
	}

	getch() ;
}