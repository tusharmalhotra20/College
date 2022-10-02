
#include<stdio.h>
#include<conio.h>

void main()
{
 int a ;
 clrscr();

 printf("Name: your name here \n Roll number: your roll no.") ;

 printf("\n\nEnter any year\n");
 scanf("%d",&a);

 if(a == 0 || a < 0)
	printf("Invalid Input!") ;
 
 else
 {
	if((a%400==0)||((a%4==0)&&(a%100!=0)))
	{

		 printf("Leap year\n") ;
	 }
	 else
	 {
		printf("Not a Leap year\n");
	 }
 }
 getch();
}