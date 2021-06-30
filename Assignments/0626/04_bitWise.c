/* Write a program to CLEAR, SET, TOGGLE 
 * with bitwise operator using Macro */

#include<stdio.h>

#define CLEAR_BIT(val, MASK)	(val = val &~ MASK) 
#define SET_BIT(val,MASK)	(val = val | MASK)
#define TOGGLE_BIT(val, MASK)	(val = val ^ MASK)

int main()
{
	unsigned int hexVal = 0x12;
	CLEAR_BIT(hexVal, 0x1d);

	printf("CLEAR BIT: 0x%x\n", hexVal);

	hexVal = 0x12;
	SET_BIT(hexVal, 0x0C);
	printf("SET BIT: 0x%x\n", hexVal);

	hexVal = 0x12;
	TOGGLE_BIT(hexVal, 0x10);
	printf("TOGGLE BIT: 0x%x\n", hexVal);

	return 0;
}

#if 0
	Input: 0x12

	MASK = 0x1d --> CLEAR BIT: 0x2
	MASK = 0x0C --> SET BIT: 0x1e
	MASK = 0x10 --> TOGGLE BIT: 0x2
#endif
