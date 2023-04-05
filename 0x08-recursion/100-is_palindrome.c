#include <string.h>
#include "main.h"

/**
 * is_palindrome - This function checks if a string is palindrome
 * @s:The string to be checked
 * Return: An interger
 */
int is_palindrome(char *s)
{

	int i, j;

	int len = strlen(s);

	for (i = 0, j = len - 1; i <= j; i++, j--)
	{
	if (s[i] != s[j])
	{
	return (0);
	}
	}
	return (1);
}

