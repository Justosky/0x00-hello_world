#include <stdio.h>



/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/


int main(void)
{
	int first_pos_comb_for_two_digits, second_pos_comb_for_two_digits;
	for (first_pos_comb_for_two_digits = 0;
		 first_pos_comb_for_two_digits < 100;
		 first_pos_comb_for_two_digits++)
	{
	for (second_pos_comb_for_two_digits = 0;
		 second_pos_comb_for_two_digits < 100;
		 second_pos_comb_for_two_digits++)
		{
	if (first_pos_comb_for_two_digits < second_pos_comb_for_two_digits)
			{
		putchar((first_pos_comb_for_two_digits / 10) + 48);
		putchar((first_pos_comb_for_two_digits % 10) + 48);
		putchar(' ');
		putchar((second_pos_comb_for_two_digits / 10) + 48);
		putchar((second_pos_comb_for_two_digits % 10) + 48);
	if (first_pos_comb_for_two_digits != 98 || second_pos_comb_for_two_digits != 99)
				{
		putchar(',');
		putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
