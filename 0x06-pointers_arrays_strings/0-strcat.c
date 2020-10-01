#include "holberton.h"
/**
* _strcat - concatenate 2 str
* @dest: str 1
* @src: str 2
* Return: final str
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (j = 0; src[j] != 0; j++)
		dest[i+j] = src[j];
	return (dest);
}
