#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
	int i;
	int max = 0, count = 0;

	for (i = 0; i < numsSize; i++)
	{
		if (nums[i])
		{
			count++;
			if (count > max)
				max = count;			
		}
		else			
			count = 0;
	}

	return max;
}
int main()
{
	int a[6] = { 1, 1, 0, 1, 1, 1 };

	int result;
	result = findMaxConsecutiveOnes(a, 6);
	printf("\nresult= %d", result);

	return 0;
}