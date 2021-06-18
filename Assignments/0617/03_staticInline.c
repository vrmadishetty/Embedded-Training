#include<stdio.h>

int global_uninit;
int global_init = 10;

static int st_global_uninit;
static int st_global_init = 10;

extern int ext_uinit;
extern int ext_init = 99;

int getcount();
//inline int func4_inlined();

int func()
{
	printf("Hello world\n");
}

static int func2()
{
	printf("Hello World , Static int \n");
}

static inline int func3()
{
	printf("Hello world, static inline \n");
}

static inline int func4_inlined()
{
	return 20;
}

int main()
{
	int x, y, z=20;
	char *name = "ramana";

	printf("Local addresses: %x %x %x\n", &x, &y, &z);
	printf("Global addresses: %x %x %x\n",
		&global_uninit, &global_init, &st_global_uninit, &st_global_init);

	printf("func address: %u\n",func);
	printf("%d\n", getcount());
	printf("%d\n",getcount());

	func3();
	func4_inlined();

	return 0;
	
}

int getcount()
{
	static int count =20;
	count++;
	return count;
}	
