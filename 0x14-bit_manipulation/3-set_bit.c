#include "holberton.h"

/**
 * set_bit - set bit to 1.
 * @n: dec number.
 * @index: index.
 * Return: 1 if it worked, or -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;

	*n = *n | mask;
	return (1);
}
