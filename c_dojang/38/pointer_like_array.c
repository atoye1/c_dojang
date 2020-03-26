
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *numPtr = malloc(sizeof(int) * 10);

	numPtr[0] = 10;
	numPtr[9] = 20;

	printf("%d\n", numPtr[0]);
	printf("%d\n", numPtr[9]);
	printf("%d\n", numPtr[5]);
	printf("%d\n", numPtr[1]);

	free(numPtr);
	printf("\n");
	printf("%d\n", numPtr[1]);
	printf("%d\n", numPtr[9]);
	printf("%d\n", numPtr[5]);

	return 0;
}
