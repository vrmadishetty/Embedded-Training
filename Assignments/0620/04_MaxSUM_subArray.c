/* Find maximum sum of sub array */


#include<stdio.h>

int maxsubarray(int arr[], int max_sum, int sum, int arr_size)
{

	for(int i = 0; i < arr_size; i++ )
	{
		sum = sum + arr[i];

		if(sum < 0)
		{
			sum = 0;
		}
		if(max_sum < sum)
		{
			max_sum = sum;
		}
	}
	return max_sum;
}
int main()
{
	int arr[] = {-2,-3, 4, -1, -2, 1, 5, -3};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	int max_sum = 0, sum = 0;

	max_sum = maxsubarray(arr,sum, max_sum, arr_size);
	printf("Maximum sum of sub array: %d\n", max_sum);
	return 0;
}

#if 0
	Test case 1:
		arr[]  = {1, -2, 3, -1, 2}
		Output:
			Max sum of sub array = 6
	Test case 2:
		arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}
		Output:
			Max sum of sub array = 7

#endif
