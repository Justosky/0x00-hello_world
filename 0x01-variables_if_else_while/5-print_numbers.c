#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/

int main(void)
{
	int single_digits_of_base_ten;

	for (single_digits_of_base_ten = 0; single_digits_of_base_ten < 10;
	single_digits_of_base_ten++)
	{printf("%i", single_digits_of_base_ten); }
	printf("\n");
	return (0);
}
