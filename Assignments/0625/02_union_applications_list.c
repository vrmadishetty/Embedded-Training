/* List out the union applications */

#include<stdio.h>

struct test_s {
	int x, y;
};

union test_u {
	int x , y;
};

typedef union
{
	struct {
		unsigned char byte1;
		unsigned char byte2;		
		unsigned char byte3;
		unsigned char byte4;
	}bytes;
	unsigned int dword;
}HW_Register;

int main()
{
	struct test_s t1 = {1, 2};
	union test_u t;

	t.x = 3; //t.y also gets value 3
	printf("after fixing x value the coordinates of t will be %d %d\n", t.x, t.x);

	t.y = 4; //t.x also updated to 4
	printf("after fixing y value the coordinates of t will be %d %d\n", t.x, t.x);
	
	printf("The coordinates of t1 are %d %d\n", t1.x, t1.y);
	
	HW_Register reg;

	reg.dword = 0x12345678;

	printf("Value of struct member byte1: 0x%x\n", reg.bytes.byte1);
	printf("Value of struct member byte2: 0x%x\n", reg.bytes.byte2);
	printf("value of struct member byte3: 0x%x\n", reg.bytes.byte3);
	printf("Value of struct member byte4: 0x%x\n", reg.bytes.byte4);

	return 0;
}

#if 0
	after fixing x value the coordinates of t will be 3 3
	after fixing y value the coordinates of t will be 4 4
	The coordinates of t1 are 1 2

	Input union memeber dword = 0x12345678,

	Output:
	Value of struct member byte1: 0x78
	Value of struct member byte2: 0x56
	value of struct member byte3: 0x34
	Value of struct member byte4: 0x12

#endif
