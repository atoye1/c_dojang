
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void printPerson(struct Person p)
{
	printf("name %s\n", p.name);
	printf("age %d\n", p.age);
	printf("address %s\n", p.address);
}

int main()
{
	struct Person p1;

	strcpy(p1.name, "hong");
	p1.age = 30;
	strcpy(p1.address, "seoul");

	printPerson(p1);

	return 0;
}
