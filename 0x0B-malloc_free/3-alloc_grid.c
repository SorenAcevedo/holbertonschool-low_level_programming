#include <stdlib.h>

/**
* alloc_grid - matrix w x h
* @width: dimension x
* @height: dimension y
* Return: Null if size 0
*/

int **alloc_grid(int width, int height)
{
	unsigned int i;
	char **p, *c;

	/* primero asigno el tamaño de memoria con Malloc */
	p = malloc(width * height);

	for (i = 0; s1[i] != 0; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != 0; j++)
		p[i + j] = s2[j];

	return (p);
}
