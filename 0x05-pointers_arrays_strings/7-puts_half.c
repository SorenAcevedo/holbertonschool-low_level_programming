#include "holberton.h"
/**
* puts_half - half of the string
*
* @str: string
*/
void puts_half(char *str)
{
	int i, l;

	i = 0;

	while (str[i] != '\0')
		i++;
	for (l = (i / 2); l < i; l++)
	{
		_putchar(str[l]);
	}
	_putchar(10);
}
