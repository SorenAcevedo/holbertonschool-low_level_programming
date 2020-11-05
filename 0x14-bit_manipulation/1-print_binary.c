#include "holberton.h"

/**
 * print_binary - convert and print dec to bi.
 * @n: dec number.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, copy = n;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	/* Generar mascara de cantidad de dígitos*/
	while (n > 1)
	{
		n >>= 1;
		mask <<= 1;
	}
	/*recorro número y voy comparando*/
	while (mask)
	{
		if (copy & mask)
			_putchar(49);
		else
			_putchar(48);
		mask >>= 1;
	}
}
