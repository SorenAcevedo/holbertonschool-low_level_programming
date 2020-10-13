#include <stdlib.h>

/**
* free_grid - free matrix w x h
* @grid: matriz
* @height: dimension y
* Return: Null if size 0
*/

void free_grid(int **grid, int height)
{
	int i, columnas;
	/* Hallar el número de columnas*/
	columnas = sizeof(grid) / height;

	for (i = 0; i < columnas; i++)
		free(grid[i]);
	free(grid);
}
