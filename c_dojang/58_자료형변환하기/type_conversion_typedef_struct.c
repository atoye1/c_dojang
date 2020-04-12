
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _Data {
	char c1;
	int num1;
} Data, *PData;

int main()
{
	Data data1;
	void *dptr = &data1;
	dptr = malloc(sizeof(struct _Data));
	PData d1 = malloc(sizeof(struct _Data));

	void *ptr;

	d1->c1 = 'a';
	d1->num1 = 10;

	data1.c1 = 'b';
	data1.num1 = 20;

	ptr = d1;

	printf("%c\n", ((Data *)ptr)->c1);
	printf("%d\n", ((Data *)ptr)->num1);

	printf("%c\n", ((Data *)dptr)->c1);
	printf("%d\n", ((Data *)dptr)->num1);

	free(d1);

	return 0;
}
