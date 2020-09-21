#include <stdio.h>
#include "holberton.h"
/**
* main - using functions.
*
* Return: Always 0.
*/
int main(void)
{
	char a[] = "Holberton";
	int i;

	for (i = 0 ; i < 9; i++)
	{
		_putchar(a[i]);
	}
	_putchar(10);
	return (0);
}
