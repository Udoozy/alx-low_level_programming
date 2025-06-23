#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Function that read a text
 * @filename: The filename to read from
 * @letters: The number of letters to be read
 * Return: Return the number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[bytes_read] = '\0';

	write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);
	return (bytes_read);
}
