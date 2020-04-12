
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person* allocPerson()
{
	struct Person *p;
	p = malloc(sizeof(struct Person));
	return p;
}

int main()
{
	struct Person* stPtr;

	stPtr = allocPerson();
	strcpy(stPtr->name, "hong");

	printf("%s", stPtr->name);

	free(stPtr);

	return 0;
}
