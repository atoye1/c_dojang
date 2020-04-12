
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Flags {
	unsigned short a : 8;
	unsigned short b : 8;
	unsigned short c : 8;
};


int main()
{
	struct Flags f1;

	f1.a = 1;
	f1.b = 15;
	f1.c = 255;

	printf("%u\n", f1.a);
	printf("%u\n", f1.b);
	printf("%u\n", f1.c);

	printf("%d\n", sizeof(f1));

	return 0;
}
