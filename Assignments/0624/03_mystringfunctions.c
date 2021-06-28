/* String operations without in built functions */

#include<stdio.h>
#include<string.h>


/* String length */
int mystrlen(const char *src)
{
	const char* temp = src;
	while(*src !='\0')
		src++;
	
	return src - temp;
}

/* String copy source to destination */
void *mystrcpy(char* dest, const char* src, int length)
{
	 char* temp = dest;
	const char* s = src;

	while(length--)
		*temp++ = *src++;

	return dest;
}

/* string compare */
int mystrcmp(const char* src1, const char* src2, unsigned int count)
{
	unsigned char s1, s2;

	while(count) 
	{
		s1 = *src1;
		s2 = *src2;

		if(s1 != s2)
			return s1 < s2? -1 : 1;
		if(!s1)
			break;
		count--;
	}
	return 0;
}
int main()
{
	char src[50] = "Hello world !!", dest[50];
	unsigned int length = 0;
//	printf("Enter the string: ");

	/* print string lenght */
	length = mystrlen(src);
	printf("Length of the string: %d\n", length);
	
	/* string copy to destination */
	mystrcpy(dest, src, length);
	printf("dest[] = \" %s\"\n", dest);

	/* string compare */
	if(mystrcmp(src, dest, length) == 0)
		printf("Strings are same \n");
	else
		printf("Strings are not same \n");

	return 0;
	
}

#if 0
	test case 0:
		Input src[] = "Hello world"
		
		Output:
		Length of the string: 14
		dest[] = " Hello world !!"
		Strings are same 

#endif
