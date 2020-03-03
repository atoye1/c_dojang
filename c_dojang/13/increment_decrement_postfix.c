
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 2;
	int num2 = 2;
	int num3;
	int num4;
	int num5 = 2;
	num5 = num5++ + ++num5;
	printf("%d\n", num5);

	num3 = ++num1; // num1의 값을 num3에 할당한 뒤 num1의 값을 1증가시킴
	num4 = --num2; // num2의 값을 num4에 할당한 뒤 num2의 값을 1증가시킴

	printf("%d %d\n%d %d\n",num1, num2, num3, num4);

	return 0;
}
