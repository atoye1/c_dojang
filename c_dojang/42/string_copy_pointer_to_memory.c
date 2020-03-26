
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s1 = "Hello";
	char *s2= malloc(sizeof(char) * 20);
	printf("so far good\n");
	strcpy(s2, s1);

	strcat(s2, s1);

	printf("%s\n", s2);


	return 0;
}
