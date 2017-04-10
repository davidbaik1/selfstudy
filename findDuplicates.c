#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int* findDuplicates(int* nums, int numsSize, int* returnSize) {
	
	int *temp;
	int *data;
	int i, j, gap;
	int k = 0;
	temp = (int *)malloc(sizeof(int)*numsSize);
	data = (int *)malloc(sizeof(int)*numsSize);


	//for (i = 0; i < numsSize; i++)
	//	printf("%d, ", nums[i]);

	for (i = 0; i < (numsSize - 1); i++)
	{
		for (j = 0; j<(numsSize - 1 - i); j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp[j] = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp[j];
			}
		}

	}

	for (i = 0; i < numsSize; i++)
		printf("%d, ", nums[i]);
	/*
	for (i = 0; i < numsSize; i++)
	{
		if ((nums[i + 1] - nums[i]) > 1)
		{
			gap = nums[i + 1] - nums[i];
			for (j = 0; j < (gap - 1); j++)
				data[k] = nums[i] + 1;
				k++;
		}
		
	}
	*/
	for (i = 0; i < numsSize; i++)
	{
		if ((nums[i + 1] - nums[i]) == 0)
		{
			data[k] = nums[i];
			//printf("data[%d] = %d,", k, data[k]);
			k++;			
		}		
	}
	
	returnSize = &k;
	printf("returnSize = %d,", *returnSize);
	return data;
}

void main()
{
	int num[8] = { 4, 3, 2, 7, 8, 2, 3, 1 };
	int size = 8;	
	int *returnSize= NULL;
	int i;
	int *temp= NULL;

	temp = findDuplicates(num, size, returnSize);
	
	printf("data= %d,\n", *returnSize);
	printf("data= %d,\n", temp[0]);
	printf("data= %d,\n", temp[1]);

}