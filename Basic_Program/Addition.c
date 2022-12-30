#include<stdio.h>

int main()
{
	int num1, num2 ,sum;

	printf("\nEnter the value of num1:");
	scanf("%d", &num1);
	printf("\nEnter the value of num2:");
	scanf("%d", &num2);

	sum = (num1 + num2);
	printf("%d + %d = %d",num1,num2,sum);
	return(0);
}
