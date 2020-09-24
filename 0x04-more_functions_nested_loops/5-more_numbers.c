#include "holberton.h"
/**
* more_numbers - 0 - 14 -> 10 times
*
*/
void more_numbers(void)
{
	int i, j, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			l = j % 10;
			if (j > 9)
				_putchar(49);

			_putchar(l + 48);
		}
		_putchar(10);
	}
}
