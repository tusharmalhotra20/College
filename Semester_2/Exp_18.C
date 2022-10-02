#include<stdio.h>
#include<conio.h>
void main()
{
 int fact=1,i,n ;
 clrscr();
 printf("Name: Tushar Malhotra\n");
 printf("Roll Number: 42513202718\n\n") ;
 x:
 printf("Enter any number:\t") ;
 scanf("%d",&n) ;
 for(i=1 ; i<=n ; i++)
 {
  fact = fact* i ;
 }
 if(fact<0)
 {
  printf("Wrong input") ;
  goto x;
 }
 else
 printf("Factorial:\t%d",fact) ;
 getch();
}