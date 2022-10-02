
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c ;
	 clrscr();

	 printf("Name: Your name\n");
	 printf("Roll Number:Your roll no\n") ;

	 printf("\n\nEnter first number:\t");
	 scanf("%d",&a) ;

	 printf("\nEnter second number:\t") ;
	 scanf("%d",&b);

	 printf("\nEnter third number:\t") ;
	 scanf("%d",&c);

	 if(a>b)
	 {
		 if(a>c)
			printf("\n\nFirst number is largest: %d\t",a);
		 else
			printf("\n\nThird number is largest: %d\t",c);
	 }

	 if(b>a)
	 {
		 if(b>c)
			  printf("\n\nSecond number is largest: %d\t",b);
		 else
			  printf("\n\nThird number is largest: %d\t",c) ;
	 }

	 if(a==b && a==c)
		printf("\n\nAll numbers are equal: %d\t%d\t%d",a,b,c);

	 getch();
}


