#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - A function that prints the chessboard.
 *@a: A character pointer array.
 *Return: This function returns void.
 */

void print_chessboard(char (*a)[8])
{
	int count_for_array_a_row, count_for_array_a_collumn;

	for (count_for_array_a_row = 0; count_for_array_a_row < 8;
	count_for_array_a_row++)
	{
	for (count_for_array_a_collumn = 0;
	count_for_array_a_collumn < 8;
	count_for_array_a_collumn++)
	{
	printf("%c", a[count_for_array_a_row][count_for_array_a_collumn]);
	}
		printf("\n");
	}

}
