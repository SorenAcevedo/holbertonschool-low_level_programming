#include "holberton.h"

/**
 * flip_bits - count dif bits, to flip..
 * @n: dec number.
 * @m: dec number.
 * Return: number of flip bites
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip, mask = 1, c  = 0;

	flip = n ^ m;
	while (flip)
	{
		c += mask & flip;
		flip >>= 1;
	}

	return (c);
}
