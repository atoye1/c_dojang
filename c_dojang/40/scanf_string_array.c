
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10];

	printf("Input String\n");
	scanf("%s", s1);

	printf("%s\n", s1);


	char s2[10];
	
	scanf("%[^\n]s", s2);
	printf("%s\n", s2);

	return 0;
}
