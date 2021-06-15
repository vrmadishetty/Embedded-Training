/* Program to find the sum of digits
 * of a number until the sum is reduce to 1 digit
 */


#include<stdio.h>


int main()
{
	int sum = 0, remainder, num;

	printf("Enter any number: ");
	scanf("%d",&num);

	while(num/10 !=0)
	{
		sum = 0;
		while(num != 0)
		{	
			remainder = num % 10;
			sum = sum + remainder;
			num = num/10;
		}
		num = sum;
	}

	printf("sum of given digits: %d\n",sum);
	return 0;
}
