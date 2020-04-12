
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union Box {
	short candy;
	float snack;
	char c1[1];
} mybox;

int main()
{
	mybox *b1 = malloc(sizeof(mybox));

	printf("%d\n", sizeof(mybox));

	strcpy(b1->c1, "A");

	printf("%d\n", b1->candy);
	printf("%f\n", b1->snack);
	printf("%s\n", b1->c1);

	free(b1);

	return 0;
}
