#include "holberton.h"
/**
* _strlen - size of array
* @s: string
* Return: len
*/
int _strlen(char *s)
{
	int i, l;

	i = 0;
	while (s[i] != '\0')
	{
		l += 1;
		i++;
	}
	return (l);
}
