
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 2;
	int num2 = 2;

	printf("%d %d\n", num1++, num2--);
	printf("%d %d\n", num1, num2);

	int num3 = 2;
	int num4 = 2;

	printf("%d %d\n", ++num3, --num4);
	printf("%d %d\n", num3, num4);

	return 0;
}
