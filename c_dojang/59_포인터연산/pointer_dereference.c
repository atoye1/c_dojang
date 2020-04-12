
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int numArr[5] = { 11, 22, 33, 44, 55};
	int *numPtrA;
	int *numPtrB;
	int *numPtrC;

	numPtrA = numArr;
	numPtrB = numPtrA + 2;
	numPtrC = numPtrA + 3;

	printf("%d %d %d", *numPtrA, *numPtrB,*numPtrC);
	printf("%p %p %p", numPtrA, numPtrB, numPtrC);

	return 0;
}
