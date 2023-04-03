#include "main.h"

/**
 * _memcpy - This function copies n bytes from memory area src to the
 * memory area dest.
 * @dest: The memory area where we will copy n bytes of data to.
 * @src: The memory area where we will copy n bytes of memory from.
 * @n: The n bytes of data to be copied.
 * Return: This function return a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count_for_src_to_dest_copy;

	for (count_for_src_to_dest_copy = 0; count_for_src_to_dest_copy < n;
	count_for_src_to_dest_copy++)

	{
		src[count_for_src_to_dest_copy] = dest[count_for_src_dest_copy];
	}
		return (dest);
}
