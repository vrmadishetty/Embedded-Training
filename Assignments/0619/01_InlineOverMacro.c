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
	

#endif
