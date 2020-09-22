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

	j = c % 10;

	if (j < 0)
		i = j * -1;
	else
		i = j;

	_putchar(48 + i);

	return (i);

}
