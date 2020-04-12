
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';
	void *ptr;

	ptr = &num1;
	printf("%d\n", *(int *)ptr);

	ptr = &num2;
	printf("%f\n", *(float *)ptr);

	ptr = &c1;
	printf("%c\n", *(char *)ptr);


	return 0;
}
