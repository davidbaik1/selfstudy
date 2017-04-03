#include <stdio.h>

bool isValid(char s) {

	if (s == '(')
	{
		printf("%c", s);
		return 1;
	}		
}

void main()
{
	int i;

	i=isValid('(');
	
	printf("%d", i);
}