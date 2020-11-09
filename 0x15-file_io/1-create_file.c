#include "holberton.h"

/**
 * create_file - create a new file.
 * @filename: file name.
 * @text_content: pointer..
 * Return: Number of written chars or 0 if fail.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t len, fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = 0;

		while (text_content[len])
			len++;
	}
	write(fd, text_content, len);

	close(fd);
	return (1);

}
