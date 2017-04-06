#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int addDigits(int num) {
	int result = num % 9;
	if (num == 0)
	{
		return 0;
	}
	return result == 0 ? 9 : result;
}

void main()
{
	int num = 39;
	int result = 0;

	result = addDigits(num);
	printf("%d\n", result);
}