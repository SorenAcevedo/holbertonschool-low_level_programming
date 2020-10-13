#include <stdlib.h>

/**
* create_array - with DM
* @size: size of a string
* @c: char
* Return: Null if size 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	/* primero asigno el tamaño de memoria con Malloc */

	p = (malloc(size));

	if (size == 0)
		return (0);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
