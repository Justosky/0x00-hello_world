#include "main.h"

/**
*_puts - Prints a string to the standard output
*@str: The string which lenght should be returned
*Return: return lenght of str
*/

void _puts(char *str)
{
	int string = 0;

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string++;

	}
		_putchar('\n');
}
