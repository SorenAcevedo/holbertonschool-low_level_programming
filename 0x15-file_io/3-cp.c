#include "holberton.h"

/**
 * main - copy text from a file to other..
 * @ac: number of arguments.
 * @av: arguments.	
 * Return: 0 Always.
 */

int main(int ac, char **av)
{
	int fd1, fd2, rfd1, wfd2;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (fd1 != -1 && fd2 != -1)
	{
		for (rfd1 = read(fd1, buffer, 1024); rfd1 > 0; rfd1 = read(fd1, buffer, 1024))
		{
			wfd2 = write(fd2, buffer, rfd1);
			if (wfd2 == -1)
				break;
		}
	}

	if (fd1 == -1 || rfd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[1]), exit(98);

	if (fd2 == -1 || wfd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]), exit(99);

	if (close(fd1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1), exit(100);

	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2), exit(100);

	return (0);
}
