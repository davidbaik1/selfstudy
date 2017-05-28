#include <stdlib.h>

struct change
{
	//char *left = "abc";
	//char *right = "def";
	char *left;
	char *right;
};

struct change swap(struct change b)
{
	char *temp;
	temp = b.right;
	b.right = b.left;
	b.left = temp;

	return b;
}

void main()
{
	struct change a;
	
	a.left = "abc";
	a.right = "def";

	a = swap(a);

	printf("\nleft = %s, right = %s\n", a.left, a.right);
}
