
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void setIdentityMatrix(float matrix[][4], int n)
{
	for (int i = 0; i < n; i++)
		matrix[i][i] = 1;
}

int main()
{

	float matrix[4][4] = {0.0f,};

	setIdentityMatrix(matrix, 4);

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <4; j++)
			printf("%f ", matrix[i][j]);
		printf("\n");
	}
	return 0;
}
