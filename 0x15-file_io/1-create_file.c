#include "holberton.h"

/**
 * create_file - create a new file.
 * @filename: file name.
 * @text_content: pointer..
 * Return: Number of written chars or 0 if fail.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, len = 0, wfd;

	while (text_content[len])
		len++;

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);

	if (fd != -1 && filename)
	{
		wfd = write(fd, text_content, len);
		close(fd);
		if (wfd != -1)
			return (1);
	}
	return (-1);
}
