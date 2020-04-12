#include <stdio.h>
#include <math.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p[4];
	double length = 0.0f;

	scanf("%d %d %d %d %d %d %d %d", 
			&p[0].x, &p[0].y, &p[1].x, &p[1].y,& p[2].x, &p[2].y, &p[3].x, &p[3].y
	     );

	for (int i = 0; i < 3; i++)
	{
		int x_delta = p[i+1].x - p[i].x;
		int y_delta = p[i+1].y - p[i].y;
		double temp_length = sqrt(pow(x_delta,2) + pow(y_delta,2));

		length += temp_length;
	}

	printf("%f\n", length);

	return 0;
}
