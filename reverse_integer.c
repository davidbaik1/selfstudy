#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

unsigned int reverse_integer(unsigned int input) {
	
	unsigned int i;
	unsigned int j = 31;
	int temp=0;

	for (i = 0; i < 32; i++)
	{
		if (input & (1u<<i))
			temp = temp|( 1u<<j );	
		j--;
	}
	
	return temp;
}

void main()
{
	unsigned int input = 5;
	unsigned int result = 0;

	result = reverse_integer(input);
	
	printf("result = 0x%x,\n", result);
	

}