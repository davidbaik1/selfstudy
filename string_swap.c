#include <stdio.h>



void swap(char **psrc, char **pdst)
{
	char *tp;
	tp = *psrc;
	*psrc = *pdst;
	*pdst = tp;
}

void main()
{
	char *src = "abc";
	char *dst = "def";

	printf("src= %s, dst= %s", src, dst);

	swap(&src, &dst);
	
	printf("src= %s, dst= %s", src, dst);
}
