#include "main.h"


/**
*print_last_digit - Print the last digit of a number
*@z: The number whose last digit will be printed
*Return: Always 0 (SUCCESS)
*/

int print_last_digit(int z)
{
	_putchar(z % 10 + '0');


	return (z % 10);
}
