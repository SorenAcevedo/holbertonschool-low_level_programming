#include "holberton.h"
/**
* cap_string - cap all words
* @a: str
* Return: str
*/

char *cap_string(char *a)
{
	int i;
	char b, c;

	for (i = 0; a[i] != 0; i++)
	{
		b = a[i];
		c = a[i - 1];

		if (b == 9)
			a[i] = 32;
		if (b > 96 && b < 123 && ((c == 32) || (c == 10) || (c == 46)))
			a[i] = a[i] - 32;
	}
	return (a);
}
