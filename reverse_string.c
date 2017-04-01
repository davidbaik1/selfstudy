#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *myreverse_str(char *a)
{
	int i = 0, j=0;
	char *temp;
	
	while (*(a + i) != NULL)
	{
		i++;
	}
	temp = (char *)malloc(sizeof(char)*i);
	int c = i+1;

	for (j = 0; j < c; j++)
	{
		*(temp+j) = *(a + i);
		printf("%c", *(temp + j));
		i--;
	}
	
	return temp;
}

void main()
{
	char *a = "1234567";
	char *p;

	p = myreverse_str(a);
	printf("\nreverse datat = %s", p+1);

	free(p);
}