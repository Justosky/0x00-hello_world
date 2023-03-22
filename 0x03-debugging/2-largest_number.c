#include <stdio.h>
#include "main.h"

/**
* largest_number - prints the largest of 3 integers
*@a: One among the third numbers to be checked
*@b: second among the third numbers to be checked
*@c: Third among the third numbers to be checked
* Return: 0
*/

int largest_number(int a, int b, int c)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	int largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
