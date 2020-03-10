#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	int result1 = num %10;
	num = num - result1;
	num = num / 10;
	printf("%d\n", num);
	int result2 = num %10; 
	num = num - result2;
	num = num / 10;
	printf("%d\n", num);
	int result3 = num %10;
	num = num - result3;
	num = num / 10;
	printf("%d\n", num);
	int result4 = num %10;
	num = num - result4;
	num = num / 10;
	int result5 = num %10;
	num = num - result5;
			    
	printf("%d %d %d %d %d", result1, result2, result3, result4, result5);
			        
        return 0;
					    
					    
}
