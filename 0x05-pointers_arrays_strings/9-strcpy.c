#include "holberton.h"
/**
* *_strcpy - copies string in the dest
* @dest: destino
* @src: fuente
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;

	while (src[l] != '\0')
		l++;

	for (i = 0; i <= (l + 1); i++)
		dest[i] = src[i];

	return (dest);
}
