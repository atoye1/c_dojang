
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int *ten()
{
	int *numPtr = malloc(sizeof(int));
	*numPtr = 10;
	return numPtr;
}

int main()
{
	int *numPtr;

	numPtr = ten();

	printf("%d\n", *numPtr);

	free(numPtr);

	return 0;
}
