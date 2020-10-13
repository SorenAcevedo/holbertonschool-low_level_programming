#include <stdlib.h>

/**
* _strdup - duplicates
* @str: string to copy
* Return: Null if size 0 or if not memory available
*/

char *_strdup(char *str)
{
	unsigned int j;
	char *p;

	/* primero asigno el tamaño de memoria con Malloc */

	p = malloc(sizeof(str) + 2);

	if (p != NULL && str != NULL)
	{
		for (j = 0; str[j] != 0; j++)
			p[j] = str[j];
		p[j] = 0;
		return (p);
	}
	return (NULL);
}
