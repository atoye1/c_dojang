#include <stdio.h>

int main()
{
	char num1 = -10;	// 1바이트 부호있는 정수형
	short num2 = 30000;	// 2byte signed int
	int num3 = -1234567890; // 4byte signed int
	long num4 = -1234567890;// 4byte signed int
	long long num5 = -1234567890123456789;	// 8byte signed int

	// char, short, int -> %d, long -> %ld, longlong -> %lld
	printf("%d %d %d %ld %ld\n", num1, num2, num3, num4, num5);

	return 0;
}

