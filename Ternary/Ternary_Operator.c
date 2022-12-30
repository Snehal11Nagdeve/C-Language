# include <stdio.h>
int main()
{
	int n1 = 20, n2 = 40;

	if (n1 > n2)
		printf("\n%d is max", n1);
	else
		printf("\n%d is max", n2);

	printf("\n\nUsing Ternary operator");
	(n1 > n2) ? printf("\n%d is max", n1) : printf("\n%d is max", n2);

	return(0);
}