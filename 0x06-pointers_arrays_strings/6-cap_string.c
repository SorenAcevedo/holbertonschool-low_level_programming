#include "holberton.h"
/**
* cap_string - cap all words
* @a: str
* Return: str
*/

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] == 9)
			a[i] = 32;
		if (a[i] > 96 && a[i] < 123 && (a[i - 1] == 32))
			a[i] = a[i] - 32;
	}
	return (a);
}
