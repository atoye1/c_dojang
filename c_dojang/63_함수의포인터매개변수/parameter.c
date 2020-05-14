
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#define IN
#define OUT
#include <stdio.h>
void swap(IN int* first, OUT int* second)
{
	int temp;
	temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;

	swap(&num1, &num2);

	printf("%d %d\n", num1, num2);
	

	return 0;
}
