#include "main.h"

/**
 *_strspn - A function that gets the length of a prefix substring.
 *@s: The segment that we will be working with
 *@accept: A memory location
 *Return: This function the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count_for_string_s, count_for_string_accept;

	for (count_for_string_s = 0;
		s[count_for_string_s] != '\0';
		count_for_string_s++)
	{
	for (count_for_string_accept = 0;
		accept[count_for_string_accept] != '\0';
		count_for_string_accept++)
	{
	if (s[count_for_string_s] == accept[count_for_string_accept])
		{
		break;
		}
	}
	if (accept[count_for_string_accept] == '\0')
		{
		return (count_for_string_s);
		}
	}
	return (count_for_string_s);
}

