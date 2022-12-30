# include <stdio.h>

int main()
{
	int n = 4;
	int row =0, col=0;
	while (row <= n)
	{
		col = 0;
		while (col <= row)
		{
			printf(" *");
			col++;
		}
		printf("\n");
		row++;
	}
	return 0;
}