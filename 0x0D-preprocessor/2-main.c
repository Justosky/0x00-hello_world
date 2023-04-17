#include <unistd.h>

void _putchar(char c);

/**
*main - The entry point.
*Return:This function returns (0) on success and otherwise it
* returns 1 on failure
*/

int main(void)
{
	char *file_name = __FILE__;
	int count_file_name;

	for (count_file_name = 0; *(file_name + count_file_name) != '\0';
	 count_file_name++)
	{
		_putchar(*(file_name + count_file_name));
	}
		_putchar('\n');
return (0);
}

/**
*_putchar - This function writes a single character to standard output.
*@c: The character to be printed.
*Return: This function returns nothing(void).
*/
void _putchar(char c)
{
	write(1, &c, 1);
}


