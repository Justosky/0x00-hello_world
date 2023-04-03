#include "main.h"
/**
 *_memset - A function that fills memmory with a constant byte.
 *@s: A pointer that points to a memory area which is to be filled
 *with a constant byte.
 *@b: b is the constant byte which is to filled at a memory location
 *pointed by the pointer *s
 *@n: n is the n bytes of memory pointed by the pointer *s which is
 *to be filled with a constant byte b.
 *Return: This function returns(s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int range_of_n;

	for (range_of_n = 0; range_of_n < n; range_of_n++)
	{
		s[range_of_n] = b;
	}
		return (s);
}
