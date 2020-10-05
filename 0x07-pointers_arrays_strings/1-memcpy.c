#include "holberton.h"

/**
* _memcpy - set first n values from src to dest
* @src: str
* @dest: str
* @n: number
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
