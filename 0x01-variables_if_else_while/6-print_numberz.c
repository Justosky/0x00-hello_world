#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/

int main(void)
{
	int single_digits_of_base_ten;

	for (single_digits_of_base_ten = 48;
	single_digits_of_base_ten < 58; single_digits_of_base_ten++)
	{putchar(single_digits_of_base_ten); }

	return (0);
}
