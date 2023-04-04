#include "main.h"

/**
  * print_number - Prints any integer with putchar.
  * @n: The umber to be printed.
  * Return: This function returns nothing.
  */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
	print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
