//자료형에 상관없이 값을 꺼내오고 싶을때는 void pointer사용한다.
/* C template made by Seol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *allocMemory()
{
	void *ptr = malloc(10);
	
	return ptr;
}

int main()
{
	char *s1 = allocMemory();
	//void pointer casting to char pointer
	strcpy(s1, "Hello, world!_char_pointeis longer than 10byte");
	printf("%s\n", s1);
	free(s1);

	int *numPtr1 = allocMemory();
	numPtr1[0] = 10;
	numPtr1[1] = 20;
	printf("%d %d %p %p\n", numPtr1[0], numPtr1[1], &numPtr1[0], &numPtr1[1]);
	free(numPtr1);

	return 0;
}
