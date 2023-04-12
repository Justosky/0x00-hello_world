#include <stdlib.h>

/**
 * create_array - This function creates an array of chars, and
 * initializes it with a specific char.
 * @size: The size of the character
 * @c: The character
 * Return: Returns NULL if size = 0 or Returns a pointer to the array, or
 * NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
	array[count] = c;
	}
	return (array);
}

