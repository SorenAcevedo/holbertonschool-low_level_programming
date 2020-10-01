#include "holberton.h"
/**
* _strncpy - concatenate 2 str
* @dest: str 1
* @src: str 2
* @n: n from src
* Return: final str
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; src[i] != 0 ; i++)
	{
	}

	for (j = 0; j < n && dest[j] != 0 ; j++)
	{
		if (j < i)
			dest[j]  = src[j];
		else
			dest[j] = 0;
	}
	return (dest);
}
