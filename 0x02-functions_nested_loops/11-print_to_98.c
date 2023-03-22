#include "main.h"

/**
*print_to_98 - Print all natural numbers
*@n: The natural numbers to be printed
*Return: Returns nothing
*/

void print_to_98(int n)

{

	for (n = 0; n <= 98; n++)
	{
	_putchar(n);
	_putchar(',');
	_putchar('\n');
	}
}
