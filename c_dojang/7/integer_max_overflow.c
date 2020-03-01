#include <stdio.h>
#include <limits.h>

int main()
{
	char num1 = CHAR_MAX + 1;
	short num2 = SHRT_MAX + 1;
	int num3 = INT_MAX + 1;
	long num4 = LONG_MAX + 1;

	printf("%d %d %d %ld\n", num1, num2, num3, num4);

	unsigned char num5 = UCHAR_MAX + 1;
	unsigned short num6 = USHRT_MAX + 1;
	unsigned int num7 = UINT_MAX + 1;
	unsigned char num8 = ULLONG_MAX + 1;

	printf("%u, %u, %u, %llu", num5, num6, num7, num8);

	return 0;
}

