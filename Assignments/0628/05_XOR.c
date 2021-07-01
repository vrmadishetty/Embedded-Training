/* Do exclusive OR for 
20,20,40,40,13,13,11,88,88,98,99,11,11 */


#include <stdio.h>


int main()
{
	unsigned int arr[] ={20,20,40,40,13,13,11,88,88,99,99,11,11};
    	unsigned int sizeArr, XOR_VALUE = 0;
    	sizeArr = sizeof(arr)/sizeof(unsigned int);
    	XOR_VALUE = arr[0];
    	printf("Input array is: %d ", arr[0]);
    	
	for(int i=1; i < sizeArr; i++){
        	XOR_VALUE  = XOR_VALUE ^ arr[i];
        	printf("%d ",arr[i]);
    	}
    	
	printf("\n");
    	printf("XOR is %d \n",XOR_VALUE);

    	return 0;
}

#if 0
	Input array is: 20 20 40 40 13 13 11 88 88 99 99 11 11 
	XOR is 11 
#endif
