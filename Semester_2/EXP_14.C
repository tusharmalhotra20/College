#include<stdio.h>
#include<conio.h>
void main()
{
	char ch ;
	clrscr();

	printf("Name: Your name here\n Roll Number: your roll no. \n\n");

	printf("Enter charcter:\t");
	ch = getchar();

	if(ch>= 'A' && ch<='Z')
		printf("\nUpper case Character: %c\t",ch) ;

	else if(ch>='a'&& ch<='z')
		printf("\nLower case Character: %c\t",ch) ;

	else if(ch>='0' && ch<='9')
		printf("\nIt is a Digit: %c\t",ch);

	else
		printf("\nSpecial Character: %c\t",ch) ;

	getch();
}