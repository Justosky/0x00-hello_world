#include "main.h"

/**
 *_strstr - The _strstr() function finds the first
 *occurrence of the substring needle in the string haystack.
 *The terminating null bytes (\0) are not
 *compared.
 *@haystack: The pointer that I will be working with.
 *@needle: The string that I will be working with.
 *Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int count_for_haystack, count_for_needle;

	for (count_for_haystack = 0; haystack[count_for_haystack] != '\0';
		count_for_haystack++)
	{
		for (count_for_needle = 0; needle[count_for_needle] != '\0' &&
			haystack[count_for_haystack + count_for_needle] == needle[count_for_needle];
			count_for_needle++)
		{

		}

		if (needle[count_for_needle] == '\0')
		{
			return (&haystack[count_for_haystack]);
		}
	}
return ('\0');
}
