
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char name[100];
	int age;
	char address[100];
};

int main()
{
	struct Person *p1 = malloc(sizeof(struct Person));
	
	strcpy(p1->name, "abcdeabcde");
	p1->age = 30;
	strcpy(p1->address, "서울시");

	printf("name %s\n", p1->name);
	printf("age %d\n", p1->age);
	printf("addr %s\n", p1->address);

	printf("%p\n", &p1);
	printf("%llu\n", (unsigned long long )&p1->name);
	printf("%llu\n", (unsigned long long )&p1->age);
	printf("%llu\n", (unsigned long long )&p1->address);

	free(p1);

	return 0;
}
