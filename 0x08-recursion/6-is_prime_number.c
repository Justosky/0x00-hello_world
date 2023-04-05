#include "main.h"

/**
 * is_prime_number - This function checks if an inputed
 * interger is a prime number
 * @n: The inputed to check.
 * Return: This function returns an interger 0 when n is not a prime number
 * and returns 1 when n is a prime number
 */

int is_prime_number(int n)
{
	int iteration_count;

	if (n <= 1)
	{
		return (0);
	}
	for (iteration_count = 2; iteration_count < n / 2; iteration_count++)
	{
		if (n % iteration_count == 0)
		{
			return (0);
		}

	}
		return (1);
}

