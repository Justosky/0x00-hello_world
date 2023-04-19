#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: the name given that is to be printed.
 * @f: function for name
 * Rteurn: This function returns void.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
	{
	return (f(name));
	}
}

