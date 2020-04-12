
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{

	void *ptr =malloc(100);
	*(++(int *)ptr) = 10;
	free(ptr);


	return 0;
}
