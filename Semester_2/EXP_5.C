#include<stdio.h>
#include<conio.h>

void main()
{
 int n ;
 float num,num1;
 clrscr();
 printf("Name: Your Name \nRoll No.: Your Roll no\n\n ")  ;

 do
 {
  printf("\n\nChoose the Conversion:\t") ;
  printf("\n1.Celcius to Fahrenheit:") ;
  printf("\n2.Fahrenheit to Celcius") ;
  printf("\n3.Exit") ;
  printf("\nEnter your choice:\t") ;
  scanf("%d",&n) ;

  switch(n)
  {
   case 1:   printf("\nEnter temprature in Celcius:\t") ;
	     scanf("%f",&num)  ;
	     num1 = (num*1.8) + 32 ;
	     printf("\nIn Fahrenheit:\t%f",num1) ;
	     break ;

   case 2:    printf("\nEnter temprature in Fahrenheit:\t") ;
	      scanf("%f",&num)  ;
	      num1 = (num-32)/1.8 ;
	      printf("\nIn Celcius:\t%f",num1) ;
	      break ;
  }
 }while(n!=3) ;
 getch();
}
