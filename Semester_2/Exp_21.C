#include<stdio.h>
#include<conio.h>
void main()
{
 int a=0,b=1 ,c,i,n ;
 clrscr();
 printf("Name: Tushar Malhotra\n");
 printf("Roll Number: 42513202718\n\n") ;
 printf("Enter any number:\t");
 scanf("%d",&n) ;
 printf("\nFibonnaci series: %d\t",a) ;
 printf("%d\t",b) ;
 for(i=3 ; i<=n ; i++)
 {
  c = a + b ;
  printf("%d\t",c);
  a = b;
  b = c;
 }
 getch();
}