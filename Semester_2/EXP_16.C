#include<stdio.h>
#include<conio.h>
void main()
{
	char ch ;
	int i ;
	clrscr();

	printf("Name: Your name here \n Roll Number: your roll no. \n\n");

	printf("Enter a Charcter or Digit:\t");
	ch = getchar();

	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	{
		i = ch ;
		printf("ASCII value of charcter is: %d\t",i) ;
	}

	else if(ch>='0' && ch<='9')
	{
		i = ch ;
		printf("ASCII value of Digit is: %d\t",i) ;
	}

	else
		printf("\nERROR: neither it is a Alphabet nor a Digit")  ;

	getch();
}
