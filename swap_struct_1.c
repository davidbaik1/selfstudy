#include <stdlib.h>

struct change
{
	char *left = "abc";
	char *right = "def";
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

	a = swap(a);

	printf("\nleft = %s, right = %s", a.left, a.right);
}