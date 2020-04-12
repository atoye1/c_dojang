
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	short *numPtr = malloc(sizeof(int));
	long long *cPtr;

	*numPtr = 0x5678;

	cPtr = (long long *)numPtr;

	printf("0x%llu\n", *cPtr);

	free(numPtr);

	return 0;
}
