#include "holberton.h"
/**
* print_diagonal - print ntimes '\'
* @n: int -> char ascii
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				if (j == i)
				{
					_putchar('\\');
					_putchar(10);
				}
				else
					_putchar(' ');
		}
	}
	else
		_putchar(10);
}
