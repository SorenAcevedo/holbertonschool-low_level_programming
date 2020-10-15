#include <stdlib.h>
/**
* array_range -  allocates memory for an array of nmemb elements of size
* @min: int
* @max: int
* Return: p
*/
int *array_range(int min, int max)
{
	int *p, i;

	p = malloc(max - min + 1);

	for (i = 0; i + min <= max; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
