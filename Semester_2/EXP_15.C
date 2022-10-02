#include<stdio.h>
#include<conio.h>
void main()
{
	char ch ;
	clrscr();

	printf("Name: Your name here \n Roll Number: your roll no. \n\n");

	printf("Enter charcter:\t");
	ch = getchar();

	if(ch>= 'A' && ch<='Z')
	{
		ch = ch + 32 ;
		printf("\nConverted character: %c\t",ch);
	}

	else if(ch>='a' && ch<='z')
	{
		ch = ch - 32 ;
		printf("\nConverted charcter: %c\t",ch);
	}

	else
		printf("\nERROR: not a Alphabet") ;

	getch();
}
