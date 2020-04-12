
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char text[30] = "Helloworldclasssonny";

	int length = strlen(text);
	int n;

	printf("input N\n:");
	scanf("%d", &n);

	for (int i = 0; i<= length - n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", text[i+j]);
		}
		printf("\n");
	}

	return 0;
}
