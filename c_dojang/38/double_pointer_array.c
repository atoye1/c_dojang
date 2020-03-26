
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row = 5;
	int col = 3;

	int **m = malloc(sizeof(int*) *row);

	for (int i=0; i<row; i++)
	{
		m[i] = malloc(sizeof(int) * col);
	}
	
	m[4][1] = 41;
	m[0][0] = 100;
	m[4][2] = 42;

	printf("%d %d %d", m[4][1], m[4][2], m[0][0]);

	return 0;
}
