#include <stdio.h>


/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char lower_and_upper_case_letters[56]
	 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int _lower_and_upper_case_letters;

	for (_lower_and_upper_case_letters = 0;
	 _lower_and_upper_case_letters <= 52; _lower_and_upper_case_letters++)

	{ putchar(lower_and_upper_case_letters[_lower_and_upper_case_letters]); }

	putchar('\n');

	return (0);
}
