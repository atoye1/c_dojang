
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";

	char *ptr = strchr(s1, 'a');

	printf("%p %s\n", ptr, ptr);
	printf("%p %s\n", ptr+1, ptr+1);
	printf("%p\n", s1);
	printf("%c\n", *ptr);
	printf("%p\n", &ptr);

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a');
	}
	
	return 0;
}
