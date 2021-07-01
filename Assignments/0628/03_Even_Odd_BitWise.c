/* Write a program to find out even or odd using bitwise */

#include <stdio.h>

int main()
{
	int num;
	int mask = 0x1;

	printf("Enter a number: ");
	scanf("%d", &num);

	if((num & mask) == 0)
		printf("%d is an Even number\n", num);
	else	
		printf("%d is an Odd number\n", num);

	return 0;
}

#if 0
Enter a number: 234
234 is an Even number

Enter a number: 889
889 is an Odd number
#endif
