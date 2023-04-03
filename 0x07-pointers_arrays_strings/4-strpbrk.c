#include "main.h"

/**
 *_strpbrk - A function locates the first occurrence in the string "s"
 *of any of the bytes in the string "accept".
 *@s: One of the string that I am working with.
 *@accept: One of the string that I am working with.
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in "accept", or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *pointer_to_s, *pointer_to_accept;

	for (pointer_to_s = s; *pointer_to_s != '\0'; pointer_to_s++)
	{
		for (pointer_to_accept = accept;
			*pointer_to_accept != '\0';
			pointer_to_accept++)
		{
			if (*pointer_to_s == *pointer_to_accept)
			{
				return (pointer_to_s);
			}
		}
	}

	return ('\0');
}
