
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void allocMemory(void **ptr, int size)
{
	*ptr = malloc(size);
}

int main()
{
	long long *numPtr = NULL;

	allocMemory(&numPtr, sizeof(long long));
	// 단일포인터의 메모리 주소는 이중포인터와 같음
	*numPtr = 10;
	printf("%lld\n", *numPtr);

	free(numPtr);

	return 0;
}
