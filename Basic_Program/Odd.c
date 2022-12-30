#include<stdio.h>
int main()
{
	int i;
	printf("\nEnter the odd number between 1 to 30 :");
	for (i = 1; i <= 30; i++)
	{
		if (i % 2 != 0)
		{
			printf("\n%d ", i);
		}
	}
	return(0);
}