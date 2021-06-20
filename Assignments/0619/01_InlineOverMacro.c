/* Write a simple c program to demonstrate
 * inline functon advantage over the macro
 */

#include<stdio.h>


#define CUBE(X) ((X) * (X) * (X))

static inline int cube(int i) {
  return i * i * i;
}

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("cube inline function : %d\n",cube(++num));
    printf("CUBE macro function  : %d\n",CUBE(++num));
    
    return 0;	
		
}

#if 0
	TEST CASE 1
		Enter the number
		2
		cube inline function : 27
		CUBE macro function  : 120
#endif
