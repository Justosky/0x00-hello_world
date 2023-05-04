#include "main.h"

/**
*binary_to_uint - A function that converts a binary number to an unsigned
*interger.
*@b: The string of characters containing 0's and 1's (Binary number).
*Return: This function returns an unsigned interger which is the decimal
*equivalent of the binary number *b
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int count;

	if (*b == '\0')
	{
		return (0);
	}
	else if (*b)
	{
		for (count = 0; *(b + count); count++)
		{
			if (*(b + count) == '0' || *(b + count) == '1')
			{
				result = result << 1;
				result = result + (*(b + count) - '0');
			}
			else
			{
				return (0);
			}
		}
	}
return (result);
}
