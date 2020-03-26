
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, col;

	scanf("%d %d", &row, &col);

	int **two_dimension = malloc(sizeof(int *) * row);

	for (int i = 0; i <row; i++)
	{
		two_dimension[i] = malloc(sizeof(int) *col);
	}

	for (int i = 0; i< row; i++)
	{
		for (int j =0; j<col; j++)
		{
			two_dimension[i][j] = i*j;
		}
	}

	for (int i = 0; i< row; i++)
	{
		for (int j =0; j<col; j++)
		{
			printf("%d ", two_dimension[i][j]);
		}
		printf("\n");
	}


	while (1)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", two_dimension[x][y]);
	}

	return 0;
}
	
