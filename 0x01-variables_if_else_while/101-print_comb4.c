#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/

int main(void)
{
int first_comb_of_three_digits, second_comb_of_three_digits,
	 third_comb_of_three_digits;

	for (first_comb_of_three_digits = 48; first_comb_of_three_digits < 58;
	first_comb_of_three_digits++)
	{
	for (second_comb_of_three_digits = 49; second_comb_of_three_digits < 58;
	second_comb_of_three_digits++)
	{
	for (third_comb_of_three_digits = 50; third_comb_of_three_digits < 58;
	third_comb_of_three_digits++)
	{
	if (third_comb_of_three_digits > second_comb_of_three_digits
		&& second_comb_of_three_digits > first_comb_of_three_digits)
	{putchar(first_comb_of_three_digits);
	putchar(second_comb_of_three_digits);
	putchar(third_comb_of_three_digits);
	if (first_comb_of_three_digits != 55 || second_comb_of_three_digits != 56)
	{ putchar(',');
	putchar(' ');

					}
				}
			}
		}
	}
putchar('\n');
return (0);

}
