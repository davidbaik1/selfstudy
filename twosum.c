#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int getSum(int a, int b) {
	
	
	while (a & b) {
		printf("%d\n", a&b);
		a = a ^ b;
		printf("a=%d\n", a);
		b = ((a ^ b) & b) << 1;
		printf("b=%d\n", b);		
	}
	return a ^ b;
}

void main()
{
	int a = 5;
	int b = 6;
	int result = 0;

	result = getSum(a, b);
	printf("%d\n", result);
}