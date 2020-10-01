#include "holberton.h"
/**
* _strcat - concatenate 2 str
* @dest: str 1
* @src: str 2
* @n: n from src
* Return: final str
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (j = 0; j < n && src[j] != 0; j++)
		dest[i + j] = src[j];
	return (dest);
}
