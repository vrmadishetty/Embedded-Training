/* C implementation to see how perror() and
 * strerror() functions are used to print the
 * error mesaages */

#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
	FILE *fp;

	fp = fopen("Simple.txt","r");

	printf("Value of errno: %d\n", errno);
	printf("The error message is: %s\n",strerror(errno));

	perror("Message from perror");

	return 0;
}

#if 0
	Ouput:

	Value of errno: 2
	The error message is: No such file or directory
	Message from perror: No such file or directory

#endif
