#include "holberton.h"
/**
* leet - 1337
* @a: str
* Return: str
*/

char *leet(char *a)
{
	int i, j;
	int mozart[] = {'4', '3', '0', '7', '1', 'a', 'e', 'o', 't', 'l'};

	for (i = 0; a[i] != 0; i++)
	{
		for (j = 5; mozart[j] != 0; j++)
		{
			if (a[i] == mozart[j] || a[i] == (mozart[j] - 32))
			{
				a[i] = mozart[j - 5];
			}
		}
	}
	return (a);
}
