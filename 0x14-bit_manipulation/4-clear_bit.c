#include "holberton.h"

/**
 * clear_bit - set bit to 0.
 * @n: dec number.
 * @index: index.
 * Return: 1 if it worked, or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;
	mask = ~mask;

	*n = *n & mask;
	return (1);
}
