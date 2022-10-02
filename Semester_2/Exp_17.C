#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,j,dn,binno=0 ;
 clrscr();
 printf("Name: Tushar Malhotra\n");
 printf("Roll Number: 42513202718\n\n") ;
 printf("Enter any number:\t");
 scanf("%d",&n) ;
 dn = n ;
 i = 1 ;
 for(j=n; j>0; j=j/2)
 {
  binno = binno+(n%2)*i  ;
  i=i*10;
  n=n/2;
 }
 printf("binary form: %d\tis\t%d",dn,binno) ;
 getch();
}