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
		j = c * -1;
	else
		j = c;

	i = _putchar(48 + (j % 10));

	return (i);

}
