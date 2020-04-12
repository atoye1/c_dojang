
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// 문자열의 공백을 모두 없앤다.
	// 슬라이싱을 통해 비교해가면서 모두 같을때 true를 반환한다.
	
	char *s1 = malloc(sizeof(char) * 100);
	printf("INPUT WORD : ");
	scanf("%s", s1);

	printf("Your input is : %s\n", s1);

	int result = 0;
	int index = 0;
	int length = strlen(s1);

	for (int i = 0; i < length /2; i++)
	{
		if (s1[i] != s1[length -1 -i])
		{
			result = 1;
			break;
		}
	}


	printf("%d", result);

	return result;
}
