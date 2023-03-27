#include "main.h"

/**
 *_strlen - Returns the lenght of a string
 *@s: The string to be checked
 *Return: The program will return 0 if successful
 */

int _strlen(char *s)
{
	int string_lenght;

	for (; *s++;)
	{
		string_lenght++;
	}
		return (string_lenght);
}
