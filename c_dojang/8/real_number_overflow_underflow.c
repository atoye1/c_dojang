#include <stdio.h>
#include <float.h>

int main()
{
	float num1 = FLT_MIN;
	float num2 = FLT_MAX;

	num1 = num1 / 1000000000.0f;
	num2 = num2 * 1000.0f;

	printf("%e\n%e\n", num1, num2);

	return 0;
}
