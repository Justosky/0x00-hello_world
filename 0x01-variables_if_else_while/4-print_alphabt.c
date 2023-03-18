#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char lower_case_letters_no_q_and_e[24] = "abcdfghijklmnoprstuvwxyz";
	int _lower_case_letters_no_q_and_e;

	for (_lower_case_letters_no_q_and_e = 0;
	 _lower_case_letters_no_q_and_e < 24;
	 _lower_case_letters_no_q_and_e++)
	{putchar(lower_case_letters_no_q_and_e
	[_lower_case_letters_no_q_and_e]); }

	putchar('\n');

	return (0);
}
