#include <stdio.h>

int main()
{
	int kor, eng, math, sci, sum, avg;

	scanf("%d %d %d %d", &kor, &eng, &math, &sci);
	
	if (kor<0 || kor>100)
		return 0;
	if (eng<0 || eng>100)
		return 0;
	if (math<0 || math>100)
		return 0;
	if (sci<0 || sci>100)
		return 0;

	sum = kor + eng + math + sci;
	avg = sum / 4;
	printf("%d", avg);
	if (avg>=85)
		printf("합격");
	else
		printf("불합격");

	return 0;
}

