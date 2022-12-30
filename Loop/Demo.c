#include<stdio.h>

int main() 
{
	unsigned int num;
	unsigned int ans = 0;

	printf("\nEnter Value =");
	scanf("%u", &num);

	for (ans = 0; num != 0; num >>= 1)
	{
		if (num & 01)
		{
			ans++;
		}
	}
	printf("\ncount = %d", ans);
	return(0);

}