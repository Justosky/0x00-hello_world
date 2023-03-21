#include <stdio.h>
#include "main.h"


/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/


int main(void)

{
	char all_lower_case_alphabets;

	for (all_lower_case_alphabets = 'a';
	all_lower_case_alphabets <= 'z';
	all_lower_case_alphabets++)
	{ putchar(all_lower_case_alphabets);}
	putchar('\n');
}
