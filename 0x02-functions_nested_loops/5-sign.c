#include <stdio.h>
#include "holberton.h"
/**
* print_sign - see the sing of the number
*
* @n: the number
*
* Return: 1 if is positive, 0 if is zero or -1 if is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
