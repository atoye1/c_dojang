
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	int age;
	char address[100];
} p2;

int main()
{
	struct Person p1;

	strcpy(p1.name, "hong");
	p1.age = 30;
	strcpy(p1.address, "seoul yongsan");

	printf("Name : %s\n", p1.name);
	printf("Age : %d\n", p1.age);
	printf("ADDR : %s\n", p1.address);

	struct Person p2;

	strcpy(p2.name, "hong2");
	p2.age = 302;
	strcpy(p2.address, "seoul2 yongsan2");

	printf("Name : %s\n", p2.name);
	printf("Age : %d\n", p2.age);
	printf("ADDR : %s\n", p2.address);
	return 0;
}
