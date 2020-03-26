
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10] = "jello";

	//printf("%s\n", s1);

	char s2[5];

	s2[0] = 'a';
	s2[1] = 'b';
	s2[2] = 'c';
	s2[3] = 'c';
	s2[4] = 'c';

	printf("%s\n", s2);
	printf("%s\n", "great s2");

	printf("%p %p", &s1, &s2);

	return 0;
}
