#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

bool detectCapitalUse(char* word) {
	int i;
	char *temp = word;
	int first = 0, count = 0;

	if (strlen(temp) == 1)
		return true;

	for (i = 0; i < strlen(temp); i++)
	{
		if (i == 0 && isupper(temp[i]))
		{
			first++;
			count++;
		}
		else if (isupper(temp[i]))
		{
			count++;
		}
	}
	printf("\ncount = %d", count);
	printf("\nfirst = %d", first);

	if (count == 0)
		return true;
	else if ((first == 1) && (count == 1))
		return true;
	else if (count == strlen(temp))
		return true;
	else
		return false;
}


void main()
{
	char *a = "USA";
	char *b = "gggG";
	char result;

	result = detectCapitalUse(b);
	printf("\n%s", result);

}
