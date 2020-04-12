
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30];
	scanf("%[^\n]s", s1);

	int length = strlen(s1);
	char s2[30];
	int index = 0;

	for (int i = 0; i < strlen(s1); i++)
	{
		if (s1[i] != ' ')
		{
			s2[index] = s1[i];
			index ++;
		}
	}

	for (int i = 0; i < strlen(s2)/2; i++)
	{
		if (s2[i] != s2[strlen(s2) -1 -i])
		{
			printf("%c and %c\n", s2[i], s2[strlen(s2)-1-i]);
			printf("not a pal\n");
			return 0;
		}
	}

	printf("pal\n");

		


	return 0;
}

