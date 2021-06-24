/* write a program to transpose of 
 * matrix */

#include<stdio.h>

#define ROW 3
#define COL 4

int main()
{
	int i,j;
	int mat1[ROW][COL], mat2[ROW][COL];

	printf("Enter the matrix mat(%dx%d): \n",ROW, COL);
	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			scanf("%d",&mat1[i][j]);

	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			mat2[j][i] = mat1[i][j];


	printf("Resultant transpose matrix: \n");
	for(i = 0; i < COL; i++)
	{
		for(j = 0; j < ROW; j++)
		{
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}

	return 0;

}

#if 0
	Test case 1:
		mat1(3x4):
			3 2 1 5
			6 5 8 2 
			9 3 4 1 
		Transpose of matric
	 	mat2(3x4):
	       		3 6 9
			2 5 3
	       		1 8 4
   			5 2 1
#endif
