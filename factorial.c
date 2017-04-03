#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int factorial(int num)
{
	int i;
	int result = num;
	
#if 1
	i = num;
	while(i--)
	{	
		if (i !=0)
		result = result * i;		
	}
#else if 
	for (i = num - 1; i > 0; i--)
		result = result * i;
#endif

	return result;
}

int factorial_recursive(int num)
{
	int result;

	if (num <= 1)
		return 1;
	result = num * factorial(num - 1);
	return result;

}

void main()
{
	int num = 5;
	int result = 0;

	result = factorial(num);
	printf("result = %d\n", result);
	
	result = 0;
	result = factorial_recursive(num);
	printf("recursive result = %d\n", result);

}