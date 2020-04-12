
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 1001);

	scanf("%[^\n]s", s1);

	printf("%s\n", s1);
//	printf("%d\n", strlen(s1));

	char *ptr = strchr(s1, ' ');

	int output = 0;

	while (ptr != NULL)
	{
		output++;
		ptr = strchr(ptr + 1, ' ');
	}

	printf("%d", output);

	free(s1);

	return 0;
}
