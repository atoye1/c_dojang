
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

 int matrix[5][5] = {2,20,13,7,9,11,6,8,1,11,10,7,7,8,9,15,18,5,15,17,17,17,16,4,15};
 
 for (int i=0; i<5; i++)
 {
	 for (int j=0; j<5; j++)
		 printf("%d ", matrix[i][j]);
	 printf("\n");
 }
 printf("\n\n\n");

 for (int i=0; i<5; i++)
 {
	 for (int j=0; j<5; j++)
		if (i != j)
		 {
		 printf("%d ", matrix[j][i]);
		 }
		else
		{ 
		 printf("%d ", matrix[i][j]);
		}

	 printf("\n");
 }

	return 0;
}
