#include "main.h"
#include <stdio.h>


/**
*print_to_98 - Print all natural numbers
*@n: The natural numbers to be printed
*Return: Returns nothing
*/

void print_to_98(int n)

{
if (n >= 98)
	{
	while (n > 98)
	printf("%i, ", n--);
	printf("%i\n", n);
	}
	else
	{
	while (n < 98)
	printf("%i, ", n++);
	printf("%i\n" n);
	}

}
