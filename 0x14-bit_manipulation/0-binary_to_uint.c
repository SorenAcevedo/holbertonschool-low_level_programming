#include "holberton.h"

/**
 * binary_to_uint - convert binary to decimal.
 * @b: string with binary number.
 * Return: decimal number, if error 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = -1, i, j, pos;
	unsigned int dec = 0;

	if (b)
	{
		while (b[len + 1])
			len++;

		for (i = 0; b[i]; i++, len--)
		{
			if (b[len] != '0' && b[len] != '1')
				return (0);

			pos = 1;

			for (j = 0; j < i; j++)
				pos *= 2;

			dec += (pos * (b[len] - 48));
		}
	}
	return (dec);
}
