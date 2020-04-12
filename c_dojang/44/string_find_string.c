
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "this1 this2 this3 this4 this5";

	char *ptr = strstr(s1, "this");

//	printf("%s\n", ptr);

	//printf("%s\n", strstr(s1, "ard"));

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strstr(ptr + 1, "this");
	}


	return 0;
}
