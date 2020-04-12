
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person getPerson()
{
	struct Person p;
	strcpy(p.name, "hong");
	p.age = 30;
	strcpy(p.address, "seoul");

	return p;
}

int main()
{
	struct Person p1;

	p1 = getPerson();

	printf("name: %s\n", p1.name);
	printf("age: %d\n", p1.age);
	printf("address: %s\n", p1.address);

	return 0;
}
