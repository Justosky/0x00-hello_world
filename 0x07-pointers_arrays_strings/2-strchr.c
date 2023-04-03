#include "main.h"

/**
 *_strchr - This function locates a character "c" in the string "s".
 *@s: The string to be checked if it contains the character "c".
 * @c: The character to be checked in the string "s".
 * Return: This function returns a pointer to the first occurence of the
 * character "c" in the string "s".
 * When the character c is not found it returns NULL.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0' ;)
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return ('\0');
}

