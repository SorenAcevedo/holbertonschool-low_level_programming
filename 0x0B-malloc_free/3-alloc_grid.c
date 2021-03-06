#include <stdlib.h>

/**
* alloc_grid - matrix w x h
* @width: dimension x
* @height: dimension y
* Return: Null if size 0
*/

int **alloc_grid(int width, int height)
{
	int i, j, k, **m;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* primero asigno el tamaño de memoria para las filas*/
	m = (int **) malloc(height * sizeof(int *));
	if (m == NULL)
		return (NULL);
	/* segundo asigno el tamaño para las columnas, fila por fila*/
	for (i = 0; i < height; i++)
	{
		m[i] = (int *) malloc(width * sizeof(int));
		if (m[i] == NULL)
		{
			while (i >= 0)
			{
				free(m[i]);
				i--;
			}
			free(m);
			return (NULL);
		}
	}
	/*Lleno las posiciones con 0*/
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			m[j][k] = 0;
		}
	}
	return (m);
}
