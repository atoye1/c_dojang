#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getName()
{
	char* name = malloc(100);
	strcpy(name, "Neptune");
	return name;
}


int main()
{
	char *name;

	name = getName();

	printf("%s\n", name);

	free(name);

	return 0;
}
