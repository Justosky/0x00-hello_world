#include "main.h"

/**
 * _strlen - Computes or finds the length of a string
 * @str: pointer which contains the string we want
 *to computes it's length the string
 * Return: An interger which is the value of the string.
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file to append text to.
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
