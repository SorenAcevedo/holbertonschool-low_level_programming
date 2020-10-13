#include <stdlib.h>

/**
* _strdup - duplicates
* @str: string to copy
* Return: Null if size 0 or if not memory available
*/

char *_strdup(char *str)
{
	unsigned int i;
	char *p;

	/* primero asigno el tamaño de memoria con Malloc */

	p = malloc(sizeof(str) + 1);

	if (p == NULL || str == NULL)
		return (0);
	else
	{
		for (i = 0; str[i] != 0; i++)
			p[i] = str[i];
		return (p);
	}
}
