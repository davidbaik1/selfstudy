#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *myreverse_str(char *s)
{
	int i = 0, j = 0;
	char *temp=NULL;

	while (*(s + i) != NULL)
	{
		i++;
	}
	//printf("i=%d", i);
	temp = (char *)malloc(sizeof(char)*(i+1));

	int c = i;

	for (j = 0; j < c; j++)
	{
		i--;
		*(temp + j) = *(s + i);
		printf("%c", *(temp + j));
	}
	temp[j] = NULL;
	return temp;
}

void main()
{
	char *a = "hello";
	char *p;

	p = myreverse_str(a);
	printf("\nreverse datat = %s", p);

	free(p);
}
