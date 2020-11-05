#include "holberton.h"

/**
 * get_bit - get bit by binary number.
 * @n: dec number.
 * @index: index.
 * Return: 0 or 1 or -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;
	
	if (mask & n)
		return (1);
	return (0);
}
