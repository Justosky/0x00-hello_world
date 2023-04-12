#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string we are working with
 * Return: returns a pointer to a new string which is a duplicate of the
 * string str
 */

char *_strdup(char *str)
{
	char *dup = malloc(sizeof(char));
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	if (dup == NULL)
	{
		return (NULL);
	}
	for (; str[len] != '\0'; )
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
		return (dup);
}

