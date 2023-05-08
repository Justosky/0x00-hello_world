#include "main.h"

/**
* read_textfile - A function that reads a text file and prints it's
*content to the standard output.
*@filename: A pointer which contains the strings to be printed.
*@letters: The number of character to print.
*Return: Returns an the total number of btytes written to standard output.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	bytes_read = read(o, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, r);

	if (file_descriptor == -1 || bytes_read == -1 || bytes_written == -1 ||
		bytes_read != bytes_written)
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
