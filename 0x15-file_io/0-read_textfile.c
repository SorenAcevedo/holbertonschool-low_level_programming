#include "holberton.h"

/**
 * read_textfile - read the number of letters in file.
 * @filename: file name.
 * @letters: num of letters to write.
 * Return: Number of written chars or 0 if fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rfd, wfd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd != -1 && filename != NULL && buffer != NULL)
	{
		rfd = read(fd, buffer, letters);
		close(fd);
		wfd = write(1, buffer, rfd);

		if (rfd != -1 && wfd != -1)
		{
			free(buffer);
			return (wfd);
		}
	}
	return (0);
}
