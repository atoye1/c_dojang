
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = malloc(sizeof(char)*20);

	sprintf(s1, "Hello, %s", "Work!");

	printf("%s\n", s1);

	free(s1);

	return 0;
}
