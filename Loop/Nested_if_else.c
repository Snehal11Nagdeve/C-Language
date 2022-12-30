# include <stdio.h>
int main()
{
	int i = 50;
	{
		if (i % 5 == 0)
		{
			printf("\n%d is divisible by 5", i);
		}
		else
		{
			printf("\n%d is not divisible by 5", i);
		}
	}
	return(0);
}