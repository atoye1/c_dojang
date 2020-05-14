
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


struct Person {
	char name[20];
	int age;
	char address[100];
};

void setPerson(struct Person *p)
{
	strcpy(p->name, "honh");
	p->age = 40;
	strcpy(p->address, "seoul");
}


int main()
{
	struct Person p1;

	strcpy(p1.name, "seol");
	p1.age = 35;
	strcpy(p1.address, "busan");

	setPerson(&p1);

	printf("%s\n", p1.name);
	printf("%d\n", p1.age);
	printf("%s\n", p1.address);

	return 0;
}
