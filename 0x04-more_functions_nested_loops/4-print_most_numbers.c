#include "holberton.h"
/**
* print_most_numbers - digits less 2 and 4
*
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if (i != 4 && i != 2)
			_putchar(i + 48);
	_putchar(10);
}
