#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This is the entry point for this program
 * @argc: An argument count
 * @argv: An argument vector
 * Return: This function return 0 on success or otherwise it returns 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	int sum = 0;

	for (int i = 1; i < argc; i++)
	{

	const char *arg = argv[i];

	for (const char *c = arg; *c != '\0'; c++)
	{
	if (!isdigit(*c))
	{
	printf("Error\n");
	return (1);
	}
	}

	int num = atoi(arg);

	if (num < 0)
	{
	printf("Error\n");
	return (1);
	}

	sum = sum + num;

	}
	printf("%d\n", sum);
	return (0);
}

