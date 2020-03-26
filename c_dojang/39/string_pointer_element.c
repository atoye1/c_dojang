
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char *s1 = "Hello";

	printf("%c\n", s1[1]);
	printf("%c\n", s1[4]);

	s1[0] = 'A';
	printf("%c\n", s1[0]);
	printf("%c\n", s1[12]);

	return 0;
}
