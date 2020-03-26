
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;

	scanf("%d", &num1);

	switch (num1)
	{
		case 1:
			{
			int num2 = num1;
			printf("%d 입니다.\n", num2);
			break;
			}
		case 2:
			printf("2 입니다.\n");
			break;
		default:
			printf("Default.\n");
			break;
	}

	return 0;
}
