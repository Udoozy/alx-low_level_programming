#include "main.h"
#include <string.h>
/**
 * append_text_to_file - The function to append a text
 * @filename: The filename to append to
 * @text_content: The text to be appended
 * Return: Return 1 for success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t lent = 0;
	ssize_t appended_file;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
		lent = strlen(text_content);

	if (lent > 0)
	{
		appended_file = write(fd, text_content, lent);

		if (appended_file == -1 || (size_t)appended_file != lent)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
