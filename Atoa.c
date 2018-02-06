
#include <stdio.h>

int chartoint(char *src)
{
	int i;
	i = *src - '0';
	printf("i= %d\n", i);
	return i;
}

char inttochar(int intsrc)
{
	char dstchar;
	dstchar = intsrc + '0';
	printf("dstchar= %c", dstchar);
	return dstchar;
}

char Atoa(char *s)
{
	char out;
	out = *s + 32;
	//printf("output= %c\n", out);
	return out;
}

char atoA(char *s)
{
	char out;
	out = *s - 32;
	//printf("output= %c\n", out);
	return out;
}
void main()
{
	char src = '2';
	int dst;

	int intsrc = 6;
	char chardst;

	char data_A = 'D';
	char data_a = 'd';
	char output_a, output_A;


	printf("src= %c\n", src);
	dst = chartoint(&src);
	//dst = src - '0';
	printf("dst= %d\n", dst);

	chardst = inttochar(intsrc);
	printf("chardst= %c\n", chardst);

	output_a = Atoa(&data_A);
	printf("output= %c\n", output_a);

	output_A = atoA(&data_a);
	printf("output= %c\n", output_A);

}
