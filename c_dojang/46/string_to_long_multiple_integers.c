
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "0xaf10 42 0x27c 9952";
	int num1;
	int num2;
	int num3;
	int num4;
	char *end;

	num1 = strtol(s1, &end, 16);
	printf("%p\n", &end);
	num2 = strtol(end, &end, 16);
	printf("%p\n", &end);
	num3 = strtol(end, &end, 16);
	printf("%p\n", &end);
	num4 = strtol(end, NULL, 10);

	printf("%x\n", num1);
	printf("%d\n", num2);
	printf("%x\n", num3);
	printf("%d\n", num4);

	return 0;
}
