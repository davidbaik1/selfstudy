#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


void main()
{
	int num[8] = { 4, 3, 2, 7, 8, 2, 3, 1 };
	int size = 8;
	int *temp;
	int i, j;

	temp = (int *)malloc(sizeof(int)*size);

	for (i = 0; i < (size); i++)
		printf("%d, ", num[i]);

	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j<(size - 1-i); j++)
		{
			if (num[j] > num[j + 1])
			{
				temp[j] = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp[j];
			}
		}
		
	}

	for (i = 0; i < size; i++)
		printf("\n%d,", num[i]);
}