/* Write a program to take input as a password
 * but should display only x's
 * instead of characters */

#include<stdio.h>
//#include<conio.h>

//
int main()
{
	char ch;
	printf("Enter passowrd:  ");

	while(ch!='\n')
	{
		/* getc can read any input stream
		 * getchar reads from standard input */
	//	ch = getchar();
		ch = getc(stdin);
//		ch = getch();
		
	}
	return 0;

}
