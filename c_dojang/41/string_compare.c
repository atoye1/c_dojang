
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "hello";
	char *s2 = "gello";

	int ret = strcmp(s1, s2);

	printf("%d\n", ret);

	return 0;
}
