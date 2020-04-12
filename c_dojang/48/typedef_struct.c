
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _Person {
	char name[20];
	int age;
	char address[100];
} Person;

int main()
{
	Person p1;

	strcpy(p1.name, "seol");
	p1.age = 33;
	strcpy(p1.address, "busan");
	

	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);
	return 0;
}



