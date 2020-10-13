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

	p = malloc(sizeof(str));

	if (p != NULL && str != NULL)
	{
		for (i = 0; i <= sizeof(str); i++)
			p[i] = str[i];
	}
	else
		return (0);
	return (p);
}
