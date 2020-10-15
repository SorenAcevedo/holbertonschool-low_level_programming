#include <stdlib.h>

/**
* string_nconcat - concatenate 2 str (s1 + n(s2))
* @s1: string 1
* @s2: string 2
* @n: copy n char
* Return: Null if size 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, l1 = 0, l2 = 0;
	char *p;

	/* primero asigno el tamaño de memoria con Malloc */

	if (s1 != NULL)
	{
		while (s1[l1] != 0)
			l1++;
	}
	if (s2 != NULL)
	{
		while (s2[l2] != 0)
		l2++;
	}

	l = l1 + l2 + 1;

	if (n < l2)
		p = malloc(sizeof(char) * (n + l1 + 1));
	else
	{	
		p = malloc(sizeof(char) * l);
		n = l2;
	}

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	for (j = 0; i < n; j++)
		p[i + j] = s2[j];
	p[i + j] = 0;

	return (p);
}
