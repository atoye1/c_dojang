
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "The Little Prince";

	char *ptr = strrchr(s1, 'i');

	printf("%s\n", ptr);

	return 0;
}
