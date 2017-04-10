#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct change
{
	char *left = "abc";
	char *right = "def";
}vision;

vision *swap(vision *b)
{
	char *temp;
	temp = (*b).right;
	b->right = (*b).left;
	b->left = temp;

	return b;
}

void main()
{
	vision p;
	vision *sp = &p;
	sp = swap(sp);

	printf("\nleft = %s, right = %s", sp->left, sp->right);
}
