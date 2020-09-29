#include "holberton.h"
#include <stdio.h>
/**
* print_rev - print reverse
* @s: string
*/
void print_rev(char *s)
{
	int len, i;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (len = i; len >= 0; len--)
		_putchar(s[len]);
	_putchar(10);
}
