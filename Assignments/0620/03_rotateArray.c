/* Rotate an array (right or left) with n times on 
 * use input */

#include<stdio.h>

void leftRotate(int* arr, int arr_size, int rotate)
{

	int i,j;
	for(i = 0; i < rotate; i++)
	{
		int temp = arr[0];

		for(j = 0; j< arr_size-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[j] = temp;
	}
//#if 0
	printf("Left rotate arr[] = {");
	for(i=0; i < arr_size; i++)
	{
		printf("%d,",arr[i]);
	}
	printf("}\n");
//#endif
}

int main()
{
	int arr[] = {10, 20, 30 , 40, 50, 60, 70, 80, 90, 100};
	int rotate;
	int arr_size = sizeof(arr)/sizeof(arr[0]);

	printf("Given array arr[] = {");
	for(int i = 0; i < arr_size; i++)
	{
		printf("%d,",arr[i]);

	}
	printf("}\n");
	printf("Input the number to the rotate an array: ");
	scanf("%d", &rotate);

	leftRotate(arr, arr_size, rotate);
	return 0;
}


#if 0
 Test case 1:
	Given array arr[] = {10,20,30,40,50,}
	Input the number to the rotate an array: 3
	Output:
		Left rotate arr[] = {30,40,50,10,20,}
		
 Test case 2:
 	Given array arr[] = {10,20,30,40,50,60,70,80,90,100,}
	Input the number to the rotate an array: 5
	output:
		Left rotate arr[] = {60,70,80,90,100,10,20,30,40,50,}

 	

#endif
