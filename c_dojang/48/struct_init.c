
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person p1 = {.name = "hong", .age=30, .address="seoul"};

	printf("name: %s\n", p1.name);
	printf("age: %d\n", p1.age);
	printf("address: %s\n", p1.address);
	return 0;
}
