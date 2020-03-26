
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int **m = malloc(sizeof(int *) * 3);
	// 이중 포인터에 2차원 배열의 세로 공간에 해당하는 메모리를 할당
	// 가로 공간의 메모리 주소가 들어갑니다.:

	for (int i = 0; i <3; i++)
	{
		m[i] = malloc(sizeof(int) * 4);
	}

	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;

	printf("%d\n", m[0][0]);
	printf("%d\n", m[2][0]);
	printf("%d\n", m[2][3]);

	for (int i = 0; i< 3; i++)
	{
		free(m[i]);
	}

	free(m);

	return 0;
}
