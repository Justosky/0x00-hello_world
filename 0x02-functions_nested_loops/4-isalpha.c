#include "main.h"

/**
*_isalpha - Checks for lower or uppercase letters and
*@c: Checks if a character is an alphabet
*return 1 if it exist else it returns 0
*Return: Always 0 (SUCCESS)
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
	return (1);
}
