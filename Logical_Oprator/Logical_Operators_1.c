#include<stdio.h>

int main()
{
	int math, sci, hindi;

	printf("\nEnter the value of math:");
	scanf("%d", &math);
	printf("\nEnter the value of sci:");
	scanf("%d", &sci);
	printf("\nEnter the value hindi:");
	scanf("%d", &hindi);

	if (math >= 40 && sci >= 40 && hindi >= 40)
	{
		printf("\nPass");
	}
	else if (math >= 40 && sci >= 40 && hindi <= 40)
	{
		printf("\nATKT:hindi");
	}
	else if (math >= 40 && sci <= 40 && hindi <= 40)
	{
		printf("\nATKT:sci,hindi");
	}
	else if (math <= 40 && sci >= 40 && hindi <= 40)
	{
		printf("\nATKT:math,hindi");
	}
	else if (math <= 40 && sci <= 40 && hindi >= 40)
	{
		printf("\nATKT:math,sci ");
	}
	else if(math <= 40 && sci <= 40 && hindi <= 40)
	{
		printf("\nFAIL");
	}
}