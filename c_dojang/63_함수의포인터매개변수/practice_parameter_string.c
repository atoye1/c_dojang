
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compareString(*char s1, *char s2)
{
	:

int main()
{
	char *s1 = malloc(sizeof(char) *10);
	strcpy(s1, "Venus");
	compareString(s1, "Venus");
	free(s1);

	return 0;
}
