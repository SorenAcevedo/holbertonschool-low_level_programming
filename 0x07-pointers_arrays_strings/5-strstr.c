#include "holberton.h"

/**
* _strstr - locates a string in a string
* @haystack: str
* @needle: str
* Return: a pointer the 1 occurrence str in the string s,
* or NULL if the str is not found
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k, stop = 0;
	char *p;

	p = '\0';

	for (k = 0; needle[k] != 0; k++)
	{
	}

	for (i = 0; haystack[i] != 0 && stop == 0; i++)
	{
		for (j = 0; needle[j] == haystack[i + j] && needle[j] != 0; j++)
		{
			if (j == (k - 1))
			{
				p = &(haystack[i]);
				stop = 1;
			}
		}
	}
	return (p);
}
