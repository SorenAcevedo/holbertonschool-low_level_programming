#include <stdlib.h>

/**
* str_concat - concatenate 2 str
* @s1: string 1
* @s2: string 2
* Return: Null if size 0
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, l, l1, l2;
	char *p;

	/* primero asigno el tamaño de memoria con Malloc */
	l1 = sizeof(s1);
	l2 = sizeof(s2);
	l = l1 + l2;

	if (l == 0)
		return (NULL);
	p = malloc(l + 3);

	for (i = 0; s1[i] != 0; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != 0; j++)
		p[i + j] = s2[j];

	return (p);
}
