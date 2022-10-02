#include<stdio.h>
#include<conio.h>

void main()
{
	 int a,b,c,d,e,f ;
	 clrscr();

	printf("Name: Your name here \n Roll Number: your roll no");

	 printf("\n\nEnter marks for Subject 1:\t");
	 scanf("%d",&a) ;

	 printf("Enter marks for Subject 2:\t") ;
	 scanf("%d",&b);

	 printf("Enter marks for Subject 3:\t") ;
	 scanf("%d",&c);

	 printf("Enter marks for Subject 4:\t") ;
	 scanf("%d",&d);

	 printf("Enter marks for Subject 5:\t") ;
	 scanf("%d",&e);

	 f = (a+b+c+d+e)/5 ;

	 if(f<0 || f>100)
		  printf("\n\nError: wrong values entred\n");

	 if(f>90 && f<=100)
	 {
		  printf("\nGrade: A") ;
		  printf("\n\nPercentage: %d %",f) ;
	 }

	else if(f>80 && f<=90)
	{
		  printf("\nGrade: B") ;
		  printf("\n\nPercentage: %d %",f) ;
	}

	else if(f>70 && f<=80)
	{
		printf("\nGrade: C") ;
		printf("\n\nPercentage: %d %",f) ;
	}

	else if(f>60 && f<=70)
	{
		printf("\nGrade: D") ;
		printf("\n\nPercentage: %d %",f) ;
	}

	else if(f>50 && f<=60)
	{
		printf("Grade: E") ;
		printf("\n\nPercentage: %d %",f) ;
	}

	else if(f<50)
	{
		printf("\nFAILED");
		printf("\n\nPercentage: %d %",f) ;
	}

	getch();
}