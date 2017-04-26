#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void function2(int *ptr) {
	
	int y;
	
	printf("\nptr = %x", ptr);
	printf("\n&y = %x", &y);

	if (&y > ptr)
		printf("\nStack grows from lower address to higher address\n");
	else
		printf("\nStack grows from higher address to lower address\n");
}

void function1()
{
	int x;
	int y;

	printf("\n&x = %x", &x);
	printf("\n&y = %x", &y);

	function2(&x);
}

void main()
{
	function1();
	
}
