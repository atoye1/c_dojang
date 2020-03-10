#include <stdio.h>

int main()
{
	char c;
	        
        scanf("%c", &c);
		    
	printf("%s\n", c == 'k' ? "참" : "거짓");
	printf("%s\n", c >= 'h' ? "참" : "거짓");
	printf("%s\n", c >= 'o' ? "참" : "거짓");
	printf("%c\n", c);
			
        return 0;
}
