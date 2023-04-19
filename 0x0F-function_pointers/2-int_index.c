#include "function_pointers.h"

/**
  * int_index - The index
  * @array: An array
  * @size: Size of the array
  * @cmp: Cmp
  * Return: Returns an integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (b = 0; b < size; b++)
			{
				if (cmp(array[b]))
					return (b);

			}
		}
	}

	return (-1);
}

