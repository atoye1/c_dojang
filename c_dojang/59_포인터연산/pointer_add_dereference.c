/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numArr[5] = { 11, 22, 33, 44, 55};
	int *numPtrA;

	numPtrA = numArr;

	printf("%d\n", *numPtrA);
	printf("%d\n", *numPtrA+1);
	printf("%d\n", *(numPtrA+1));

	return 0;
}
