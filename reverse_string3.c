#include <stdio.h>
#include <stdlib.h>

int temp_j=0;

char* reverseWords(char* s)
{
	char *temp = NULL;
	int i=0, j=0, k=0, size;
	int temp_i;

	size = strlen(s)+1;
	printf("\n size = %d\n", size);
	
	temp = malloc(sizeof(char)*(size+1));
	
	for(i=0 ; i<=size ; i++)
	{
		if((s[i] == ' ') || (s[i]=='\0'))
		{
		//printf(" space = %d \n",i);
		temp_i = i;
		for(j=0 ; j<=i ; j++)
			{
			k=i;
			*(temp + temp_j) = s[k-1];
			//printf("%s",(temp+j));
			printf("\ni=%d",i);
			i--;
			k++;
			temp_j++;
			}
		i = temp_i;
		}
	}
	return temp;	
}


void main()
{
	char *input = "Let's take LeetCode Contest";
	char *output = NULL;
	
	printf("\n start\n");
	output = reverseWords(input);
	printf("\n result = %s\n", output);


}
