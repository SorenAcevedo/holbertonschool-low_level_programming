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

	for (i = 0; i < l; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
