#include <stdio.h>
#include <stdlib.h>

char *reverseStr(char* s, int k) {
	char *temp;
	temp = s;
	int i=0, j=0, m=0;

	while ((*s + i) != NULL)
		i++;

	printf("%d", i);
	temp = (char*) malloc(sizeof(char)*i);

	for (j=0 ; j < k; j++)
	{
		*(temp + j) = *(s + i);
		printf("%c", *(temp + j));
		i--;
	}
	return temp;
}

void main()
{
	char *s = "abcedf";
	int k = 2;
	char *result;

	printf("start = %s\n", *s);
	result = reverseStr(s, k);
	
	printf("%s", *result);
}