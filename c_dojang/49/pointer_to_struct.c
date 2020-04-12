
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
	struct Person p1;
	struct Person *ptr;

	ptr = &p1;

	ptr->age=30;

	printf("age: %d\n", p1.age);
	printf("age: %d\n", ptr->age);


	return 0;
}
