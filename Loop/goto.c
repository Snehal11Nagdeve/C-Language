# include <stdio.h>

int main()
{
	printf("\n Program Started");

	goto error;
	printf("\n This will never exicute");
error:
	printf("\n Error, Clean up actions");

	return(0);
}