#include <stdio.h>

int mystrlen(char *a)
{
	int i = 0;
	while (*(a + i) != NULL) i++;
	return i;
}

int mystrcmp(char *a, char *b)
{
	int i=0;
	while (*(a + i) != NULL && *(b + i) != NULL)
	{
		i++;
		if (*(a + i) != *(b + i)) return 0;
	}
	return 1;
}

/*
char *mystrcat(char *a, char *b)
{
	char *strcat;
	int i=0, j=0,temp=0, *add = NULL;

	//strcat = a;
	while (*(a + i ) != NULL)
		i++;

	printf("%d", i);
		
	while (*(b+ j) != NULL)
	{
		printf("111=%s\n", *(a + i));
		*(a + i+j) = *(b + j);
		printf("%s\n", *(a + i+j));
		j++;

	}
	
	//for (temp = 0; temp < i + j +1; temp++)
	//	printf("%c", *(strcat + temp));

	return a;
}
*/
char *mystrcat(char *dst, const char *src)
{
	char *cp = dst;
	while (*cp) cp++;
	printf("cp=%d", cp);
	while (*cp++ = *src++);
	printf("%d", dst);
	return dst;
}



void main()
{
	char *a = "abc";
	char *b = "def";
	int count, i, temp=0;
	int *p;

	printf("%s, %s", a, b);
	//printf("%s, %s", *a, *b);
	/*
	count = mystrlen(a);
	printf("mystrlen:%d\n", count);

	i = mystrcmp(a, b);
	printf("mystrcmp:%d\n", i);
	*/
	//p = mystrcat(a, b);
	//for (temp = 0; temp < 10; temp++)
	printf("%s", *(p));
}