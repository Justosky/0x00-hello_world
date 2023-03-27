#include "main.h"

/**
 *swap_int - A function that swaps the value of two intergers
 *@a: The first integer to be swapped
 *@b: The second interger to be swapped
 */

void swap_int(int *a, int *b)
{
	int swap_a;

	int swap_b;

	swap_a = *a;
	swap_b = *b;
	*a = swap_b;
	*b = swap_a;
}
