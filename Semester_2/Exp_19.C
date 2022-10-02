#include<stdio.h>
#include<conio.h>
void main()
{
 int n,e,f=1 ;
 clrscr();
 printf("Name: Tushar Malhotra\n");
 printf("Roll Number: 42513202718\n\n") ;
 printf("Enter Base:\t");
 scanf("%d",&n) ;
 printf("Enter it's Exponent:\t") ;
 scanf("%d",&e) ;
 while(e>0)
 {
  f = f*n ;
  e-- ;
 }
 printf("power:\t %d",f) ;
 getch();
}