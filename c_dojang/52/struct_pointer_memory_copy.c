
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D *p1 = malloc(sizeof(struct Point2D));
	struct Point2D *p2 = malloc(sizeof(struct Point2D));

	p1->x = 10;
	p1->y = 20;

	memcpy(p2, p1, sizeof(struct Point2D));

	printf("%d %d", p2->x, p2->y);

	free(p1);
	free(p2);

	return 0;
}
