/* A block of code is given to you
 * and comment out all the code
 */

// check given number is palindrome

#include<stdio.h>

int main()
{
	int num, reverse = 0, temp;

	printf("Enter a number to check a palindrom:");
	scanf("%d",&num);
	
	// store the input in to temporary variable
	temp = num;

	while(temp!=0)
	{
		reverse = reverse * 10;
		reverse = reverse + temp%10;
		temp = temp/10;
	}
	
	// print the output
	if(num == reverse)
		printf("%d is a palidrome number.\n",num);
	else
		printf("%d is not a palindrome number.\n",num);

	return 0;
}

