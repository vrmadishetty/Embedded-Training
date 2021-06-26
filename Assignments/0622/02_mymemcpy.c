/* write a c program to implement mem copy
 * operation with void pointers */
#include<stdio.h>
//#include<string.h>

void *my_memcpy(void *dest, const void *src, size_t count)
{
	char *tmp = dest;
	const char *s = src;

	while(count--)
		*tmp++ = *s++;

	return dest;
}

unsigned int my_strlen(const char *src)
{
	unsigned int length = 0;
	const char *s = src;
	while(*s!= '\0')
	{
		length++;
		s++;
	}

	return length;
}

int main()
{
	const char src[50] = "Welcome";
	char dest[50]; 

	my_memcpy(dest, src, my_strlen(src));

	printf("After memcpy dest[50]: %s\n", dest);
	return 0;
}

#if 0
	Output: Welcome
#endif
