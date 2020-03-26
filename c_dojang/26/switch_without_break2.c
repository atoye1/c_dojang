
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
		case 2:
			printf("This is 1 or 2.\n");
			break;

		case 3:
		case 4:
			printf("This is 3 or 4.\n");
			break;
		default:
			printf("None of the above, Printing default.\n");
			break;
	}

	return 0;
}
