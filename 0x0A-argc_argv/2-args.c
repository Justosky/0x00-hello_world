#include <stdio.h>

/**
 * main - This is the master function. Without this function
 * nothing works
 * @argc: Always stands for argument counter
 * @argv: Always stand for argument vector
 *Return: It will interest you to know that this function will return
 *an interger 0 when it ran successfully otherwise it returns 0.
 */

int main(int argc, char *argv[])
{
	int count_for_argv;

	(void) argv;

	for (count_for_argv = 0; count_for_argv < argc; count_for_argv++)
	{
	printf("%s\n", argv[count_for_argv]);
	}

	return (0);
}
