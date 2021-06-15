/*
 * write a simple program for nested comments.
 * what is the error & how we resolve it ?
 * */

#include<stdio.h>


int main()
{
 int nest = /*/*/0*/**/1;

 printf("simple program for nested comments\n");
 /* checking nested comments
  *  printf("Allows, "nesting comment."n");
  *  displays some kind of error 
 */
 
 /*
  / forward slash for nested comments
  / 0  
*/ 

 if(nest)
	 printf("Allows nesting. nest = %d\n",nest);
 else
	 printf("Doesn't allow nesting, nest = %d\n",nest);

 return 0; 
}
