
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void allocMatrix(***ptr, row, col, size)
{
	*ptr = malloc(sizeof(void *) * row);
	for (int i = 0; i < row; i++)
		(*ptr)[i] = malloc(size * col);
}

int main()
{
	short **matrix;

	allocMatrix(&matrix, 3, 3, sizeof(short));

	matrix[0][2] = 10;
	matrix[1][1] = 20;
	printf("%d %d\n", matrix[0][2], matrix[1][1]);

//	freeMatrix(&matrix, 3);

	return 0;
}
