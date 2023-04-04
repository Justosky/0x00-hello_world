#include "main.h"

/**
  * print_number - Prints any integer with putchar.
  * @n: The umber to be printed.
  * Return: This function returns nothing.
  */

void print_number(int n)
{
	unsigned int n_one;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	n_one = n;

	if (n_one / 10)
	{
	print_number(n_one / 10);
	}
	_putchar(n_one % 10 + '0');
}
