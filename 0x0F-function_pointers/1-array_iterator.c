#include "function_pointers.h"

/**
 * array_iterator - A function that iterates over all
 * parameter on each element of an array.
 * @array: The array to execute func on
 * @size: This is the size of the array
 * @action:  This is a pointer to the function that I'm using.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
