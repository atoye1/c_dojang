
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c1 = 'a';
	char *s1 = "Jello";
	char *s2 = "Hellodiopfjsdf";

	printf("%c\n", c1);
	printf("%s\n", s1);

	printf("%p\n", s1);
	printf("%p\n", s2);
	printf("%d\n", *s1);
	printf("%s\n", s2);
	printf("%ld", sizeof(s2));

	return 0;
}
