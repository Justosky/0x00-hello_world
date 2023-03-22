#include "main.h"


/**
*print_last_digit - Print the last digit of a number
*@z: The number whose last digit will be printed
*Return: Always 0 (SUCCESS)
*/

int print_last_digit(int z)
{
	int n = z % 10;

	if (n < 0)
	{
	n = n * -1;
	_putchar(n + '0');
			}
	if (n < 0)

	{
	n = n * 1;
	_putchar(n + '0');
			}

	return (n);
}
