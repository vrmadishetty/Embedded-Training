/* Find the second largest number in the array */

#include<stdio.h>


int bubblesorting(int* arr, int ARRAYSIZE)
{
	//sorting ascending
	for(int i = 0; i < ARRAYSIZE - 1; i++)
	{
		for(int j = 0; j < ARRAYSIZE -1 - i; j++)
		{
			if(arr[j] >  arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}	
	}

}

void second_largest_num(int* arr, int ARRAYSIZE)
{	
	printf("Second largest number in arr[] = {");
	
	for(int i = 0; i < ARRAYSIZE; i++)
	{
		printf("%d,",arr[i]);
	}
	for(int i = ARRAYSIZE - 2; i > 0 ; i--)
	{
		if(arr[i]!= arr[ARRAYSIZE -1])
		{
			printf("} = %d\n", arr[i]);
			return;
		}
	}
}


int main()
{
	int arr[] = {30, 60, 90,10, 11,6, 18, 28, 30, 21, 44, 90, 13, 22, 66 }; 
	int arr_size  = sizeof(arr)/sizeof(arr[0]);
	bubblesorting(arr, arr_size);
	second_largest_num(arr, arr_size);
	return 0;
}


#if 0
 Test case: 1
	Input array arr[] = {12,20,15,40,21}
	array size: 5
	output:
	second largest number in arr[] = {12,15,20,21,40} = 21
	
 Test case: 2
	Input array arr[] = {30, 60, 90,10, 11,6, 18, 28, 30, 21, 44, 90, 13, 22, 66 } 
	array size 15
	
	output:
	Second largest number in arr[] = {6,10,11,13,18,21,22,28,30,30,44,60,66,90,90} = 66

#endif

