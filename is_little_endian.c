#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int is_little_endian() {
	
	int i = 1;
	char *ptr = (char *)&i;
	int is_little_endian;

	printf("*ptr=%d", *ptr);

	if (*ptr == 1)
		is_little_endian = 1;
	else
		is_little_endian = 0;

	return is_little_endian;
}

void main()
{
	int input = 0xffffffff;
	int result = 0;

	result = is_little_endian();
	printf("\nresult = %d", result);

}