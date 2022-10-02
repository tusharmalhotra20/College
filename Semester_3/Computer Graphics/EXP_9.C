#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd = DETECT, gm ;
 int i, j ;
 float a,b,c ;
 float final[8][2]  ;
 float r[8][3] = {0,0,0, 100,0,0, 0,0,100, 0,100,0, 0,100,100, 100,100,0,
 100,0,100, 100,100,100} ;

 clrscr();

 printf("Enter coordinates:\t") ;
 scanf("%f%f%f",&a,&b,&c) ;
 for(i=0; i<8; i++)
 {
   final[i][0] = r[i][0] - a * r[i][2] / c + 100 ;
   final[i][1] = r[i][1] - b * r[i][2] / c + 100 ;

 }
 initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

 line(final[0][0], final[0][1], final[3][0], final[3][1]) ;
 line(final[0][0], final[0][1], final[2][0], final[2][1]) ;
 line(final[0][0], final[0][1], final[1][0], final[1][1]) ;
 line(final[3][0], final[3][1], final[4][0], final[4][1]) ;
 line(final[3][0], final[3][1], final[5][0], final[5][1]) ;
 line(final[6][0], final[6][1], final[7][0], final[7][1]) ;
 line(final[1][0], final[1][1], final[6][0], final[6][1]) ;
 line(final[1][0], final[1][1], final[5][0], final[5][1]) ;
 line(final[2][0], final[2][1], final[4][0], final[4][1]) ;
 line(final[2][0], final[2][1], final[6][0], final[6][1]) ;
 line(final[4][0], final[4][1], final[7][0], final[7][1]) ;
 line(final[5][0], final[5][1], final[7][0], final[7][1]) ;

 getch();
 closegraph();
}