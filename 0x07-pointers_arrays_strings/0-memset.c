#include "holberton.h"

/**
* _memset - set values since a adress to adress + n
* @s: pointer
* @b: value
* @n: number
* Return: a pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
