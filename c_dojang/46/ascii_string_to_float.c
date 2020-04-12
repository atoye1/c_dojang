
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char *s1 = malloc(sizeof(char) * 100);
	strcpy(s1, "35.5, 3.e10, 9.23123, 7.12");
	//char *s1= "35.283672 3.e5 9.281772 7.e-5";
	printf("Error\n");
	//float num1,num2,num3,num4;

	char *ptr= strtok(s1, " ");

	while (ptr !=NULL)
	{
		printf("%f\n", atof(ptr));
		ptr = strtok(NULL, " ");
	}

	//num1 =atof(s1);

	//printf("%f %f\n", num1,num2);

	return 0;
}
