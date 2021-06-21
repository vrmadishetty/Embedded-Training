/* Check if array is sorted in ascending order or not */

#include<stdio.h>

void check_ascending_order(int* arr, int arr_size)
{
	for(int i = 0; i < arr_size - 1; i++)
	{
		for(int j=0; j < arr_size - i; j++)
		{
			if( arr[j+1] < arr[j])
			{
				printf("Array is not sorted in ascending\n");
				return;
			}
		}
	}
	printf("Array is in ascending order\n");
}

int main()
{
	int arr[] = {1,2,2,3,3,3,4,4,3,5,6};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Array input arr[ ] = {");
	for(int i =0; i < arr_size ; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("}\n");
	check_ascending_order(arr, arr_size);
	return 0;
}


#if 0
	Test case 1:
		Array input arr[ ] = {1,2,3,5,4}
		Array is not sorted in ascending
	
	Test case 2:
		Array input arr[ ] = {5,5,5,5,6}
		Array is in ascending order
	Test case 3:
		Array input arr[ ] = {1,2,2,3,3,3,4,4,3,5,6}
		Array is not sorted in ascending
		
#endif
