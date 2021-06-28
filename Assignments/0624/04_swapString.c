/* Swap the string using pointer */

#include<stdio.h>

//my string length
int mystrlen(const char *str)
{
	const char* temp = str;
	while(*str != '\0')
		str++;

	return str -temp;
}

//Swaping the pointers
void swapString_pointers(char **src, char ** dest)
{
	char* temp;

	temp = *src;
	*src  = *dest;
	*dest = temp;

}


//Swaping the contents
void swapString_data(char str1[], char str2[], int len)
{
	char temp;
	
	for(int i = 0; i < len; i++)
	{
		temp = str1[i];
		str1[i] = str2[i];
		str2[i] = temp;	
	}

}


int main()
{
	char *src = "source";
	char *dest = "destination";
	char str1[] = "RAMANA";
	char str2[] = "123456";

	printf("Before swapping src[] = \"%s\", dest[] = \"%s\" \n", src, dest);
	swapString_pointers(&src, &dest);
	printf("After swapping src[] = \"%s\", dest[] = \"%s\" \n", src, dest);
	int length = mystrlen(str1);
	printf("Lenght: %d\n", length);
	swapString_data(str1, str2, length);

	printf("After swapping str1[] = \"%s\", str2[] = \"%s\" \n", str1, str2);
	return 0;
}


#if 0
	Test case 1:
	Output:
	before swapping src[] = "source", dest[] = "destination" 
	After swapping src[] = "destination", dest[] = "source" 
	Lenght: 6
	After swapping str1[] = "123456", str2[] = "RAMANA"
#endif
