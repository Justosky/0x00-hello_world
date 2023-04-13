#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - This function returns an assignrd memory address
 *from malloc to a pointer
 *@b: The value that we assigned memory to.
 *Return: Returns an interger which is the value for the memory
 *address allocated for the value b.
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc((b) * sizeof(unsigned int));

	if (i == NULL)
	{
	exit(98);
	}
	return (i);
}
