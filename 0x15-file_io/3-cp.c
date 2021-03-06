#include "holberton.h"

/**
 * main - copy text from a file to other..
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0 Always.
 */

int main(int ac, char **av)
{
	int fd1, fd2, rfd1, wfd2, size = 1024;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd1 != -1 && fd2 != -1)
	{
		for (rfd1 = read(fd1, buf, size); rfd1 > 0; rfd1 = read(fd1, buf, size))
		{
			wfd2 = write(fd2, buf, rfd1);
			if (wfd2 == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}

	if (fd1 == -1 || rfd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	if (fd2 == -1 || wfd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);

	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);

	return (0);
}
