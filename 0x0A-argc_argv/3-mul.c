#include <stdio.h>
#include <stdlib.h>

/**
 * main - Always the entry point to other functions
 * @argc: This is our argument count.
 * @argv: This is our argument vector.
 * Return: this function returns 0 on success otherwise it returns 1.
 */

int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

	int a = atoi(argv[1]);

	int b = atoi(argv[2]);

	int result = a * b;

	printf("%d", result);
	}

	return (0);
}
