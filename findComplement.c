#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int findComplement(unsigned int num) {
	unsigned i;
	for (i = 1; i <= num; i = i * 2)
	{
		printf("\n%d", i);
		num ^= i;
	}
	
	return num;
}

void main()
{
	int a = 2147483647;
	int result;

	result = findComplement(a);
	printf("\n%d", result);

}