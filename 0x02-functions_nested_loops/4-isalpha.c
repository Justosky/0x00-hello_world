#include "main.h"

/**
*_isalpha - Checks for lower or uppercase letters and
*@c: Checks if a character is an alphabet
*return 1 if it exist else it returns 0
*Return: Always 0 (SUCCESS)
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	if (c >= 'A' && c <= 'Z')
	{
	if (c == 38 )
	{
	return (0);
	}
	else
	{
	return (1);
	}
	}
	}
	return (1);
}
