#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *BUFFER = malloc(sizeof(char) * letters);

	if ((BUFFER == NULL) || (filename == NULL))
	{
		return (0);
	}
	else
	{
		file_descriptor = open(filename, O_RDONLY);

		if (file_descriptor == -1)
		{
			return (0);
		}
		else
		{
			bytes_read = read(file_descriptor, BUFFER, letters);
			if (bytes_read == -1)
			{
				close(file_descriptor);
				free(BUFFER);
				return (0);
			}
			else
			{
				bytes_written = write(STDOUT_FILENO, BUFFER, bytes_read);
				if (bytes_read != bytes_written)
				{
					close(file_descriptor);
					free(BUFFER);
					return (0);
				}
				else
				{
					close(file_descriptor);
					free(BUFFER);
					return (bytes_written);
				}
			}
		}
	}
}
