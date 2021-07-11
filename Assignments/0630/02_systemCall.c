/* Write a program to Man command with the help
 * of system(). Display the Menu of man to take the input for
 * choosing particular sub function */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100], cmd[20], section[10];
	printf("man [option] [section number] [command name]\n");
	printf("Enter command: ");
	scanf("%s",cmd);
	printf("Enter section number: ");
	scanf("%s",section);
	sprintf(str, "man %s %s", section, cmd);
	printf("%s\n",str);
	system(str);
	return 0;
}


#if 0
	man [option] [section number] [command name]
	Enter command: sleep
	Enter section number: 3
	man 3 sleep
#endif
