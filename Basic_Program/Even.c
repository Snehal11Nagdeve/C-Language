#include<stdio.h>

int main()
{
	int i;
	printf("\nEven number between 1 to 40:\n");
	for (i = 1; i <= 40; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
	return(0);
}