#include "holberton.h"

/**
 * create_file - create a new file.
 * @filename: file name.
 * @text_content: pointer..
 * Return: Number of written chars or 0 if fail.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t len = 1, fd;

	while (text_content[len])
		len++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd != -1 && filename)
	{
		write(fd, text_content, len);
		close(fd);
		return (1);
	}
	close(fd);
	return (-1);
}
