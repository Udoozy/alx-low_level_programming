#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Function that create a file
 * @filename: The name of file to be created
 * @text_content: The content to be written to the file
 * Return: return 1 for success and -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		lent = strlen(text_content);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (lent > 0)
	{
		written = write(fd, text_content, lent);
		if (written == -1 || (size_t)written != lent)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
