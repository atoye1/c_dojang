
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 30;
	p1.y = 20;

	p2.x = 60;
	p2.y = 50;

	printf("p1: %d %d\n", p1.x, p1.y);
	printf("p2: %d %d\n", p2.x, p2.y);

	int x_delta = (p2.x - p1.x)*(p2.x - p1.x);
	int y_delta = (p2.y - p1.y)*(p2.y - p1.y);

	printf("%d %d\n", x_delta, y_delta);

	double result = sqrt(x_delta+y_delta);

	printf("%f\n", result);	

	return 0;
}
