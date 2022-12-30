# include <stdio.h>

int main()
{
	for (int row = 0; row <= 4; row++) 
	{
		for (int col = 0; col <= 4; col++)
		
			if (row == col)
			{
				printf(" *");
			}
			else
			{
				printf(" ");
			}
		
		printf("\n");
	}
	return(0);
}