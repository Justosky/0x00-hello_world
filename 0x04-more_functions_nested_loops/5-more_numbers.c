#include "main.h"

/**
*more_numbers - A  function that prints 10 times the numbers,
*from 0 to 14, followed by a new line
*Return: nothing
*/

void more_numbers(void)
{
	char a;

	char b;

	for (a = '1'; a <= 10; a++)
	{
	for (b = '0'; b <= 14; b++)
	{
	if (a >= 10)
	{
	_putchar('1');
	_putchar('b' % 10 + '0');
	}
	}
	}
_putchar('\n');
}
