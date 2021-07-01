/* Write a program to count the set bits */
  
#include <stdio.h>        
  
unsigned int countSetBits(unsigned int n) 
{ 
  unsigned int count = 0; 
  while (n) 
  { 
    count += n & 1; 
    n >>= 1; 
  } 
  return count; 
} 
  
int main() 
{ 
    int i = 9; 
    printf("Enter the Number ");
    scanf("%d", &i);

    printf("%d\n", countSetBits(i)); 
    return 0; 
} 


