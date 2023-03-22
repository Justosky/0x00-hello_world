#include "main.h"

/**
*_islower - Checks if a character is lowercase
*@c: - This is the character that we are checking
* and returns 1 if lowercase and 0 if uppercase
*Return: Always 0 (success);
*/

int _islower(int c) /* c - is a variable*/
{
	if (c >= 'a' && c <= 'z')/* c - is a variable */
	{
	return (1);
	}
	else
	{
	return (0);
	}


}
