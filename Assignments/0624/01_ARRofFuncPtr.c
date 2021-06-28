/* Using array of function pointers  */

#include<stdio.h>

float add(int a, int b)
{
	return a+b;
}

float sub(int a, int b)
{
	return a-b;
}

float mul(int a, int b)
{
	return a*b;
}

float div(int a, int b)
{
	return a/b;
}

int main()
{
	int i,a,b;

	/* declaration array of function pointers */
	float (*fptr[4])(int, int) = {add, sub, mul, div};

	char *operations[] = {"ADD", "SUBSTRACT", "MULTIPLY", "DIVISION"};

	printf("Enter the values:\n");
	scanf("%d", &a);
	scanf("%d", &b);

	for(i=0; i < 4; i++)
	{
		printf("%s - %f\n", operations[i], (*fptr[i])(a, b));
	}
	return 0;
}
