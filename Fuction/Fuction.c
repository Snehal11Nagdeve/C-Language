# include <stdio.h>

int main()
{
	void display_message(char str[]);

	display_message("Snehal Nagdeve");
	display_message("Atul ");
	display_message("ashish");
	display_message("Vivek");

	return(0);
}

void display_message(char str[])
{
	printf("\nHello %s", str);
}