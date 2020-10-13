#include <stdlib.h>

/**
* argstostr - sdfa
* @ac: matriz
* @av: dimension y
* Return: Null if size 0
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *p, *var;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		var = av[i];
		for (j = 0; var[j] != 0; j++)
		{
			len++;
		}
	}

	p = malloc(len + ac + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		var = av[i];
		for (j = 0; var[j] != 0; j++)
		{
			p[k] = var[j];
			k++;
		}
		p[k] = 10;
		k++;
	}
	return (p);
	p[k] = 0;
}
