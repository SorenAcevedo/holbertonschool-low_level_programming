#include "holberton.h"
/**
* print_triangle - print ntimes '#' triangle figure
* @size: int -> char ascii
*/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < (size - i))
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
