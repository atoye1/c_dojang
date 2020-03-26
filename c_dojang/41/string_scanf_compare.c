
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20];
	char s2[20];

	printf("Input two Chars: ");

	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);
	printf("%d\n", ret);

	switch (ret)
	{
	case 0:
		printf("string are same\n");
		break;
	case 1:
		printf("%s is bigger than %s\n", s1, s2);
		break;
	case -1:
		printf("%s is bigger than %s\n", s2, s1);
		break;
	}

	return 0;
}
