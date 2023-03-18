#include <stdio.h>


/**
*main - Entry point
*This program prints all lowercase letters followed by a newline
*Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char lower_case_letters = 'a';

	while (lower_case_letters <= 'z')
	{ putchar (lower_case_letters);
	lower_case_letters++; }

	putchar ('\n');

	return (0);

}
