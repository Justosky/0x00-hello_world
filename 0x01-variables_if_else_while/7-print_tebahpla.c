#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char lower_case_alph_in_rev;

	for (lower_case_alph_in_rev = 'z'; lower_case_alph_in_rev >= 'a';
	lower_case_alph_in_rev--)
	{putchar(lower_case_alph_in_rev); }

	putchar('\n');

	return (0);
}
