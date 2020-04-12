
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Person {
	char name[20];
	int age;
	char address[100];
} Person;

int main()
{
	Person *p1 = malloc(sizeof(Person));

	strcpy(p1->name, "Hong");
	p1->age = 30;
	strcpy(p1->address, "Seoul");

	printf("%s\n", p1->name);
	printf("%d\n", p1->age);
	printf("%s\n", p1->address);

	return 0;
}
