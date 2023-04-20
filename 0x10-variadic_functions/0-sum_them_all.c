#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - A variadic function that sums up a list of intergers
*@n: The first and mandatory argument of the variadic function
*Return: This function returns an interger which is the value
*for the sum of all arguments excluding n
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count_n;

	unsigned int result = 0;

	va_list sum;

	va_start(sum, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
	for (count_n = 0; count_n < n; count_n++)
	{
		unsigned int value = va_arg(sum, unsigned int);

		result = result + value;
	}
		va_end(sum);
	}
		return (result);
}
