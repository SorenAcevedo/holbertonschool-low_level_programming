#include "holberton.h"

/**
 * get_bit - get bit by binary number.
 * @n: dec number.
 * @index: index.
 * Return: 0 or 1 or -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1, copy = n, con = 0;

	/* Generar mascara de cantidad de dígitos*/
	while (n > 0)
	{
		n >>= 1;
		mask <<= 1;
		if (con == index)
		{
			mask >>= 1;
			if (mask & copy)
				return (1);
			return (0);
		}
		con++;
	}
	return (-1);
}
