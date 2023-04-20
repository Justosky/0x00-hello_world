#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_strings - A variadic function that prints strings
*@n: represent the total number of variable strings entered
*@separator: A pointer
*Return: Returns nothing or void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

	const char *str = va_arg(args, const char*);

	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
	if (i != n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}

