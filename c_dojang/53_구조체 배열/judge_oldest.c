#include <stdio.h>
#include <stdlib.h>

struct Person {
	char name[30];
	int age;
};

int main()
{
	struct Person *p[5];

	for (int i = 0; i < sizeof(p)/ sizeof(struct Person *); i++)
	{
		p[i] = malloc(sizeof(struct Person));
	}

	scanf("%s %d %s %d %s %d %s %d %s %d", p[0]->name, &p[0]->age, p[1]->name, &p[1]->age, p[2]->name, &p[2]->age,p[3]->name, &p[3]->age,p[4]->name, &p[4]->age
	     );

	int max_index = 0;

	for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
	{
		if (p[i]->age > p[max_index]->age) max_index=i;
	}

	printf("%s %d", p[max_index]->name, p[max_index]->age);

	for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
	{
		free(p[i]);
	}
	return 0;
}
