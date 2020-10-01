#include "holberton.h"
/**
* cap_string - cap all words
* @a: str
* Return: str
*/

char *cap_string(char *a)
{
	int i, j;
	int separadores[] = {9,10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; a[i] != 0; i++)
	{
		if (a[i] > 96 && a[i] < 123)
			for (j = 0; j < 12; j++)
			{
				if (a[i - 1] == separadores[j])
				{
					a[i] = a[i] - 32;
					break;
				}
			}
	}
	return (a);
}
