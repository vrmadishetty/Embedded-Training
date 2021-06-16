/* Write a program to print N to 1
 * using recursion */

#include<stdio.h>

void print_number(int n)
{
	if(n==0)
	{
		printf("%d\n",n);
		return;
	}
	else
	{
		printf("%d",n);
		print_number(n-1);
	}
}

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	print_number(num);
	return 0;
}
