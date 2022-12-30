# include <stdio.h>

int main()
{
	int add(int, int);

	int num1, num2, ans;

	printf("\nEnter num1=");
	scanf("%d", &num1);

	printf("\nEnter num2=");
	scanf("%d", &num2);
	
	ans = add(num1, num2);
	printf("\nAns = %d", ans);
	return(0);
}

int add(int n1, int n2)
{
	int ans;

	ans = n1 + n2;

	return(ans);
}