int hammingDistance(int x, int y) {
	int temp;
	int count = 0;
	
	temp = x^y;

	while (temp)
	{
		if (temp & 1)
			count++;
		temp = temp >> 1;
	}	

	return count;
}

void main()
{
	int a = 1;
	int b = 4;

	int result;
	result = hammingDistance(a, b);
	printf("\nresult= %d", result);
}