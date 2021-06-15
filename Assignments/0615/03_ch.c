// Execute the code and check the errors


#include<stdio.h>

int main()
{
	int x=10, y=3;
	{
		int x = 100, z =10;
		printf("%d %d\n",x,z);
	}

	printf("%d %d\n", x, z);
}
