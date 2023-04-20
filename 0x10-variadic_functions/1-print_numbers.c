#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_numbers - A variadic function that prints numbers
*@separator: A pointer
*@n: A variable
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(print, int));

	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(print);
	printf("\n");
}
