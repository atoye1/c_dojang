
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* val1, int*val2)
{
	printf("swap called\n");
	int temp;
	temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

void transpose(int matrix[][4], int n)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j) break;
			swap(&matrix[i][j], &matrix[j][i]);
		}
	}
}





int main()
{
	int matrix[4][4];

	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
			&matrix[0][0], &matrix[0][1], &matrix[0][2], &matrix[0][3],
			&matrix[1][0], &matrix[1][1], &matrix[1][2], &matrix[1][3],
			&matrix[2][0], &matrix[2][1], &matrix[2][2], &matrix[2][3],
			&matrix[3][0], &matrix[3][1], &matrix[3][2], &matrix[3][3]
	     );

	int n = sizeof(matrix[0]) / sizeof(int);

	transpose(matrix, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)

		{
			printf("%d ", matrix[i][j]);
		}

		printf("\n");
	}

	return 0;
}
