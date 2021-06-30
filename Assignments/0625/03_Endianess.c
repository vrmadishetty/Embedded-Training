/* Draw the meory layout for big & little endian
 * and map the variables from the given program */

#include<stdio.h>

int main()
{
       	union{
		int x;
		short sh;
		char c[2];
		char ch[4];
	}var;

     	var.x=0x12345678;
     	printf("0x%x 0x%x 0x%x\n", var.sh, var.c[0], var.c[1]);
     	printf("0x%x 0x%x 0x%x 0x%x\n", var.ch[0], var.ch[1], var.ch[2], var.ch[3]);
      	
	return 0;
 }

#if 0

	output:

	0x5678 0x78 0x56
	0x78 0x56 0x34 0x12

#endif
