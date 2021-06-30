/* Swap nibble without using bitwise
 * operators */

#include<stdio.h>

typedef union {
	struct {
		unsigned int FirstNibble : 4;
		unsigned int secondNibble : 4;
	}Nibble;
	char ch;
}BYTE_t;

int main()
{
	BYTE_t byte;
	byte.ch = 0x12;
	
	printf("Value of ch: 0x%x\n", byte.ch);
	printf("Before swap FirstNibble: 0x%x, SecondNibble: 0x%x\n", byte.Nibble.FirstNibble, byte.Nibble.secondNibble);

	short int tmp = byte.Nibble.FirstNibble;
	byte.Nibble.FirstNibble	= byte.Nibble.secondNibble;
	byte.Nibble.secondNibble = tmp;

	printf("After swap FirstNibble: 0x%x, SecondNibble: 0x%x\n", byte.Nibble.FirstNibble, byte.Nibble.secondNibble);
	printf("After swap value of ch: 0x%x\n", byte.ch);

	return 0;
}

#if 0
	Value of ch: 0x12
	Before swap FirstNibble: 0x2, SecondNibble: 0x1
	After swap FirstNibble: 0x1, SecondNibble: 0x2
	After swap value of ch: 0x21
#endif
