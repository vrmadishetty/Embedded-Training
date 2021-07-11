/* Write a program to convert
 * Hex to Binary 
 * Binary to Hex
 * Hex to ASCII 
 * Text to Binary */

#include<stdio.h>
#include<stdlib.h>


void HextoBinary(unsigned int number)
{
	if(number)
	{
		HextoBinary(number >> 1);
		printf("%d", number%2);
	}
	printf("\n");
}

void BinarytoHex()
{
	unsigned long int binary_num;
	int  hexValue = 0, remainder, i = 1;
	printf("Enter the binary number: ");
	scanf("%ld", &binary_num);
	//printf("Binary Input: %ld\n", num);
	
	while(binary_num != 0)
	{
		remainder = binary_num % 10;
		hexValue += remainder*i;
		i = i*2;
		binary_num = binary_num/10; 
	}
	printf("Equivalent Hexadecimal: 0x%x\n", hexValue);
}

int main()
{
	int choice, hexVal = 0x0E;

	while(1)
	{
		printf("	Enter an  option to convert: \n");
		printf("	1. Hex to binary\n");
		printf("	2. Binary to Hex\n");
	
		printf("	3. Exit\n");

		printf("	Enter the number for given options: ");
		scanf("%d", &choice);

		switch(choice)
		{
	
			case 1:
				printf("Hex number is 0x%x\n", hexVal);
				HextoBinary(hexVal);
				break;
			case 2:
				BinarytoHex();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("wrong choice\n");
				break;
		}
	}

		return 0;

}


