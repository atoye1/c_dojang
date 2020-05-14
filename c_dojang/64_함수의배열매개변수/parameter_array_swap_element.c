
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swapElement(int arr[], int first, int second)
{
	int temp;
	temp = arr[first];
	arr[first] = arr[second];
	arr[second] = temp;
}

int main()
{

	int numArr[10] = { 1, 2, 3, 4,5,6,7,8,9,10};
	swapElement(numArr, 0, 1);
	printf("%d %d\n", numArr[0], numArr[1]);

	return 0;
}
