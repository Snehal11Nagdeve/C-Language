#include<stdio.h>

int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i % 5 == 0)
			break;
		printf("\n i=%d", i);
	}

	printf("\n\nLast line of the program");

	return(0);
}
