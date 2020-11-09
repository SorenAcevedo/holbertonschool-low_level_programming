#include "holberton.h"

/**
 * read_textfile - read the number of letters in file.
 * @filename: file name.
 * @letters: num of letters to write.
 * Return: Number of written chars or 0 if fail.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rfd, wfd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rfd = read(fd, buffer, letters);
	if (rfd == -1)
		return (0);

	wfd = write(1, buffer, rfd);
	if (wfd == -1)
		return (0);

	close(fd);
	free(buffer);
	return (wfd);
}
