#include <stdio.h>
#include "holberton.h"
/**
* print_last_digit - print last digit
*
* @c: an integer
*
* Return: the last number i
*/
int print_last_digit(int c)
{
	int i, j;

	if (c < 0)
		i = c * -1;
	else
		i = c;

	j = i % 10;
	_putchar(48 + j);

	return (j);

}
