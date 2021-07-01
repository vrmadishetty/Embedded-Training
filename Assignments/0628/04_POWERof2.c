/* Write a program to find out power of 2*/

#include <stdio.h>

int main()
{
	unsigned int num;
	printf("Enter number: ");
	scanf("%d", &num);

	if((num&(num -1)) == 0)
		printf("%d is Power of 2\n", num);
	else
		printf("%d is not Power of 2\n", num);

	return 0;
}

#if 0
Enter number: 301
301 is not Power of 2

Enter number: 300
300 is Power of 2
#endif
