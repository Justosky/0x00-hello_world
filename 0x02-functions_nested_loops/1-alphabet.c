#include "main.h"


/**
*print_alphabet - Entry point
*Return: Always 0 (SUCCESS)
*/


void print_alphabet(void)

{
	char all_lower_case_alphabets;

	for (all_lower_case_alphabets = 'a';
	all_lower_case_alphabets <= 'z';
	all_lower_case_alphabets++)

	{ _putchar(all_lower_case_alphabets); }
	_putchar('\n');
	return (0);
}
