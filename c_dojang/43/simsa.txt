
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	char name[30], result[40];
	char temp[10];

	scanf("%d %s", &number, name);

	if (number == 1)
		sprintf(temp, "%dst ", number);
	else if (number == 2)
		sprintf(temp, "%dnd ", number);
	else if (number == 3)
		sprintf(temp, "%drd ", number);
	else
		sprintf(temp, "%dth ", number);

	sprintf(result, "%s%s\n", temp, name);
	printf("%s", result);


	return 0;
}
