#include<stdio.h>

int main()
{
	int num1;
	num1 = 3;
	printf("\nBefore Shift = %d", num1);
	num1 = num1 << 3;
	printf("\n\nAfter Shift = %d", num1);
	return(0);
}