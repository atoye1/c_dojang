
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 20);

	sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123512312312324e-21);

	printf("%s\n", s1);

	free(s1);

	return 0;
}
