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

	buffer = malloc(letters);
	fd = open(filename, O_RDONLY);

	if (fd != -1 && filename && buffer)
	{
		rfd = read(fd, buffer, letters);
		wfd = write(STDOUT_FILENO, buffer, rfd);
		close(fd);

		if (wfd != -1 && rfd != -1)
		{
			free(buffer);
			return (wfd);
		}
	}
	free(buffer);
	return (0);
}
