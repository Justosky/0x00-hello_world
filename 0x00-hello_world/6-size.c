#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main(void)
{

	char size_of_char;
	int size_of_an_int;
	long int size_of_long_int;
	long long int size_of_long_long_int;
	float size_of_float;

	printf("Size of a char: %i byte(s)\n",(unsigned int)sizeof(size_of_char));
	printf("Size of an int: %i byte(s)\n",(unsigned int)sizeof(size_of_an_int));
	printf("Size of a long int: %ld byte(s)\n",(long int)sizeof(size_of_long_int));
	printf("Size of a long long int: %d byte(s)\n",(unsigned int)sizeof(size_of_long_long_int));
	printf("Size of float: %d byte(s)\n",(unsigned int)sizeof(size_of_float));
}
