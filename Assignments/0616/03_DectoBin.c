/* write a program to convert
 * decimal to binary */

#include<stdio.h>

void dectoBin(int value)
{
	if(value == 0)
	 return;
	
	dectoBin(value/2);
	printf("%d",value%2);	
}
int main()
{
	int num;
	printf("Enter the value:");
	scanf("%d",&num);

	dectoBin(num);
	return 0;
}
