
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum DayOfWeek{
	Sunday = 0,
	Monday = 3,
	Tuesday = 5,
	Wednesday,
	Thursday,
	Friday,
	Saturday
} myweek;

int main()
{
	myweek week;

	week = Friday;

	printf("%d\n", week);

	return 0;
}
