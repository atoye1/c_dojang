
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Rectangle {
	int x1, y1;
	int x2, y2;
};

int main()
{
	struct Rectangle rect;
	int area;

	rect.x1 = 20;
	rect.y1 = 20;
	rect.x2 = 40;
	rect.y2 = 30;

	int width = rect.x2 - rect.x1;
	int height = rect.y2 - rect.y1;

	area = width * height;

	printf("%d", area);

	return 0;
}
