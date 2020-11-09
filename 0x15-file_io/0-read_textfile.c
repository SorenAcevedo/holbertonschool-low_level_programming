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
		if (rfd == -1)
			return (0);

		wfd = write(STDOUT_FILENO, buffer, rfd);
		if (wfd == -1)
			return (0);

		close(fd);
		free(buffer);
		return (wfd);
	}
	return (0);
}
