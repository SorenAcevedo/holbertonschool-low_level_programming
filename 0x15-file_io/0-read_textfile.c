#include "holberton.h"

/**
 * read_textfile - read the number of letters in file.
 * @filename: file name.
 * @letters: num of letters to write.
 * Return: Number of written chars or 0 if fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rfd, wfd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd != -1 && filename && buffer)
	{
		rfd = read(fd, buffer, letters);
		wfd = write(1, buffer, rfd);
		close(fd);

		if (rfd && wfd)
		{
			free(buffer);
			return (wfd);
		}
	}
	free(buffer);
	return (0);
}
