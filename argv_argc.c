#include <stdio.h>
#include <string.h>

int mystrcmp(char *a, char *b)
{
	int i = 0;
	while (*(a + i) != NULL && *(b + i) != NULL)
	{
		i++;
		if (*(a + i) != *(b + i)) return 0;
	}
	return 1;
}

void main(int argc, char *argv[])
{
	int i = 0;

	printf("%s\n", argv[0]);
	printf("number of count = %d\n", argc);

	if (mystrcmp(argv[1], "echo") != 0)
	{	
		while (argv[i++])
			printf("%s ", argv[i]);
	}

}