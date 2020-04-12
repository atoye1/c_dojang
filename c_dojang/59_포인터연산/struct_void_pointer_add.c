
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data{
	int num1;
	int num2;
};

int main()
{
	void *ptr = malloc(sizeof(struct Data) * 3);

	struct Data d[3];

	return 0;
}
