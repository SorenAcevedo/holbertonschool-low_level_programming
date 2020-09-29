#include "holberton.h"
/**
* print_array - print array
* @a: array
* @n: len of array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i < (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
