#include "main.h"

/**
*_puts - Prints a string to the standard output
*@str: The string which lenght should be returned
*Return: return lenght of str
*/

void _puts(char *str)
{
	int string = 0;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
}
