#include "main.h"

/**
*print_most_numbers - Prints numbers from 0 - 9 exluding 2 and 4.
*Return: This function returns nothing
*/

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	if (!(num == '2' || num == '4'))
	{
	_putchar(num);	}
}
_putchar('\n');
}
