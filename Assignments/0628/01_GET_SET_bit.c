/* Write a program to get the bit and set the bit*/

#include<stdio.h>

#define CLEAR_BIT(val, pos)	val = val &~(1UL << pos)
#define SET_BIT(val, pos)	val = val |(1UL << pos)

int main()
{
	unsigned char hexVal = 0x00;
	int iPos = 0;

	printf("hexVal = 0x%x\n", hexVal);	
	printf("Enter the position which you want to set: ");
	scanf("%d", &iPos);

	//set the nth bit
	SET_BIT(hexVal, iPos);

	//Print the data
	printf("%d Bit is set, now hexVal will be = 0x%x\n",iPos, hexVal);

	hexVal = 0xFF;
	//clear the the nth bit
	CLEAR_BIT(hexVal, iPos);

	//printf the data
	printf("%d Bit clear, Now hexVal will be = 0x%x \n",iPos, hexVal);

	return 0;
}


#if 0
hexVal = 0x0
Enter the position which you want to set: 2
2 Bit is set, now hexVal will be = 0x4
2 Bit clear, Now hexVal will be = 0xf
#endif
