
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	short *numPtr1 = malloc(sizeof(short));
	int *numPtr2;

	*numPtr1 = 0x1234;

	numPtr2 = (int *)numPtr1;

	printf("0x%x\n", *numPtr2);

	free(numPtr1);

	int *numPtr = malloc(sizeof(int));
	char *cPtr;

	*numPtr = 0x12345678;

	printf("0x%x\n", *(char *)numPtr);
	free(numPtr);

	return 0;
}
