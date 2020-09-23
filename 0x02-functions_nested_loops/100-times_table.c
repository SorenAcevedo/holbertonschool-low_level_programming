#include "holberton.h"

/**
* print_times_table - print table n
* @n: integer
*
* Return: void
*/

void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 && n < 16)
	{
		for (i = 0; i < (n + 1); i++)
		{
			for (j = 0; j < (n + 1); j++)
			{
				k = i * j;

				if (k < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(k + 48);
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else
				{
					_putchar((k / 100) + 48);
					_putchar(((k - 100) / 10) + 48);
					_putchar((k % 10) + 48);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar(10);
		}
	}
}
