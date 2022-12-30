# include <stdio.h>
int main()
{
	int n1 = 70, n2 = 60, max;

	if (n1 > n2)
		max = n1;
	else
		max = n2;
	printf("\n max = %d", max);

	printf("\n\nUsing Ternary operator");
	max = (n1 > n2) ? n1 : n2;

	printf("\n max = %d", max);

	return(0);
}