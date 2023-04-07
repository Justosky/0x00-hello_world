#include "main.h"
#include <unistd.h>

/**
 *_putchar - Prints a character to the console.
 *@c: The character to be printed.
 */

void _putchar(char c)
{

	write(STDOUT_FILENO, &c, 1);

}

/**
 *main - Entry point
 *@argc: Our arguement count.
 *@argv: Our arguement vector.
 *Return: Returns an Integer.
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{

	char *name = argv[0];

	while (*name != '\0')
	{
		_putchar(*name++);
	}
	_putchar ('\n');
	return (0);
}
