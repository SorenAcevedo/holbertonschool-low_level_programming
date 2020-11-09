#include "holberton.h"

/**
 * main - copy text from a file to other..
 * @ac: number of arguments.
 * @av: arguments.
 * Return: 0 Always.
 */

int main(int ac, char **av)
{
	int fd1, fd2, rfd1, wfd2, cl1, cl2;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(av[1], O_RDONLY);
	rfd1 = read(fd1, buffer, 1024);
	if (fd1 == -1 || rfd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	wfd2 = write(fd2, buffer, rfd1);
	if (fd2 == -1 || wfd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1 && cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", -1);
		exit(100);
	}
	return (0);
}