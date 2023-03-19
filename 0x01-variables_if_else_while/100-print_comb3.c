#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/

int main(void)

{
int first_comb_for_two_digits, second_comb_for_two_digits;


for (first_comb_for_two_digits = 48; first_comb_for_two_digits <= 56;
	 first_comb_for_two_digits++)
	{
for (second_comb_for_two_digits = 49;
	second_comb_for_two_digits <= 57; second_comb_for_two_digits++)
		{
if (second_comb_for_two_digits > first_comb_for_two_digits)

		     {  putchar(first_comb_for_two_digits);
			putchar(second_comb_for_two_digits);

				if (first_comb_for_two_digits != 56 || second_comb_for_two_digits != 57)
			{	putchar(',');
				putchar(' ');

				}
			}
		}

	}

putchar('\n');
return (0);

}
