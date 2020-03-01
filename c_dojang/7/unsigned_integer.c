#include <stdio.h>

int main()
{
	unsigned char num1 = 200;
	unsigned short num2 = 60000;
	unsigned int num3 = 123123123;
	unsigned long num4 =12039812093;
	unsigned long long num5 = 12309812039821;

	printf("%u %u %llu\n", num1, num3, num5);
	
	return 0;
}

