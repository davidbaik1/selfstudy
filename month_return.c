#include <stdio.h>


char *month_return(int num)
{
	char *month[13];
	*(month + 0) = "Not";
	*(month + 1) = "JAN";
	*(month + 2) = "FEB";
	*(month + 3) = "MAR";
	*(month + 4) = "APL";
	*(month + 5) = "MAY";
	*(month + 6) = "JUN";
	*(month + 7) = "JUL";
	*(month + 8) = "AUG";
	*(month + 9) = "SEP";
	*(month + 10) = "OCT";
	*(month + 11) = "NOV";
	*(month + 12) = "DEC";
	//printf("%s", month[num]);
	return month[num];
}

void main()
{
	int num = 12;
	char *mon;
	mon = month_return(num);
	printf("%s\n", mon);
}