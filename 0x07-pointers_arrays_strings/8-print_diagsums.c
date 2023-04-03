#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - This function that prints the sum of the two
 *diagonals of a *square matrix of integers.
 *@a: A pointer
 *@size: A variable
 *Return: This function Returns (void) or nothing.
 */

void print_diagsums(int *a, int size)
{
	int diagsum_one = 0, diagsum_two = 0, counter_for_diagsums;

	for (counter_for_diagsums = 0; counter_for_diagsums < size;
	counter_for_diagsums++)
	{
	diagsum_one += a[counter_for_diagsums * size + counter_for_diagsums];
	diagsum_two += a[counter_for_diagsums * size +
	(size - counter_for_diagsums - 1)];
	}
	printf("%d, %d\n", diagsum_one, diagsum_two);
}
