/* Find th output
 * Pre Post increment */

#include<stdio.h>

int main()
{
	int a = 2, b =1, x;
	
/*	x = a++;
	printf("Post increment (a++) value of a: %d and x: %d\n", a,x);
	a = 2; 
	x = ++a;
	printf("Pre increment (++a) value of a: %d and x: %d\n",a,x);
	printf("Value of notb() b: %d\n",!b);
*/	
	x = (a++ && (!b)  && (b|| ++a));
	printf("Value of x = %d\n", x);

	return 0;
}
