#include "holberton.h"

/**
 * append_text_to_file - append text in the file.
 * @filename: file name.
 * @text_content: pointer..
 * Return: Number of written chars or 0 if fail.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len, fd;

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd != -1 && filename)
	{
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
	close(fd);
	return (-1);
}
