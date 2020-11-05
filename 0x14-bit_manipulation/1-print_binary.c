#include "holberton.h"

/**
 * binary - recurtion function
 * @n: number
 * Return: bynary
 */

void binary(unsigned long int n)
{
	int mod = 0;

	if (n > 0)
	{
		mod = n % 2;
		n /= 2;
		binary(n);
		_putchar(48 + mod);
	}
}

/**
 * print_binary - convert and print dec to bi.
 * @n: dec number.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(48);
	else
		binary(n);
}
