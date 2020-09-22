#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - print numbers to 98
* @n: integer
*
* Return: -
*/
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a > 97; a--)
		{
			if (a == 98)
				printf("%d\n", a);
			else
				printf("%d, ", a);
		}
	}
	else
	{
		for (a = n; a < 99; a++)
		{
			if (a == 98)
				printf("%d\n", a);
			else
				printf("%d, ", a);
		}
	}
}
