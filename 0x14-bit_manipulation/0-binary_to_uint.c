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
	int i = 0;

	if (!b)
	return (0);

	while (b[i] != '\0')
	{
	if (b[i] == '0' || b[i] == '1')
	{
	result = result << 1;
	result += (b[i] - '0');
	i++;
	}
	else
	{
	return (0);
	}
	}
	return (result);
}
