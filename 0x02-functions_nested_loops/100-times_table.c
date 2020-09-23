#include "holberton.h"

/**
* print_times_table - print table n
* @n: integer
*
* Return: void
*/

void print_times_table(int n)
{
	int i, j, k, cen = i / 100, dec, last;

	if (n > 0 && n < 16)
	{
		for (i = 0; i < (n + 1); i++)
		{
			for (j = 0; j < (n + 1); j++)
			{
				k = i * j;
				last = k % 10;
				dec = k / 10;
				cen = k / 100;

				if (k < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(k + 48);
					}
					else
						_putchar(k + 48);
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar(dec + 48);
					_putchar(last + 48);
				}
				else
				{
					dec = (k - 100) / 10;

					_putchar(cen + 48);
					_putchar(dec + 48);
					_putchar(last + 48);
				}
			}
			if (j != n)
				_putchar(10);
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
