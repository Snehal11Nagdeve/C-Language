#include<stdio.h>

int main()
{
	int num1, num2;
	printf("\nEnter the value of num1 =");
	scanf("%d", &num1);
	printf("\nEnter the value of num2=");
	scanf("%d", &num2);

	if (!(num1 == 5 || num2 == 10))
	{
		printf("\nValid");
	}
	else
	{
		printf("\nInValid");
	}
	return(0);
}