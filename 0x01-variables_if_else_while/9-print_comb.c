#include <stdio.h>


/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/

int main(void)
{
	int pos_comb_of_all_single_digits;

	for (pos_comb_of_all_single_digits = 48;
	pos_comb_of_all_single_digits < 58;
	 pos_comb_of_all_single_digits++)
	{putchar(pos_comb_of_all_single_digits);
	
	if (pos_comb_of_all_single_digits != 57)
		{putchar(',');
		putchar(' '); }}
	
	putchar('\n');
return (0);
}
