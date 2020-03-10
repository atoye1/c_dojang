
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int balance = 10000;
	int age;

	scanf("%d", &age);

	if (age >= 19)
		balance -= 1200;
	else if (age >=13)
		balance -= 720;
	else if (age >=7)
		balance  -= 450;
	else
		balance = balance;

	printf("%d\n", balance);
	return 0;
}
