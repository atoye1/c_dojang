#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int other()
{
	int8_t num1 = INT8_MIN;
	uint16_t num2 = UINT16_MAX;
	int32_t num3 = INT32_MAX;
	uint64_t num4 = UINT64_MAX;

	printf("%d %u %d %llu\n", num1, num2, num3, num4);
	return 0;
}

int main()
{
	char num1 = CHAR_MAX;
	short num2 = SHRT_MAX;
	int num3 = INT_MAX;
	long num4 = LONG_MAX;
	long long num5 = LLONG_MAX;

	printf("%d %d %d %ld %lld \n", num1, num2, num3, num4, num5);

	other();

	return 0;
}


