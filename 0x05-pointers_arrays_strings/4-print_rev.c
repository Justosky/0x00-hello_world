#include "main.h"

/**
 *print_rev - Prints a string s in reverse order
 * @s: The string to be printed in reverse
 * Return: return void
 */


void print_rev(char *s)
{
	int reverse_s;
	int count = 0;

	while(s[count] != '\0')
		{
		count++;
		for(reverse_s = count -1; reverse_s >= 0; reverse_s--)
		{
		_putchar(s[reverse_s]);
		}
		}
	_putchar('\n');
}
