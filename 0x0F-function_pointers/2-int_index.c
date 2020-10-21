#include <stdio.h>

/**
* int_index - match index
* @array: array
* @size: size of array
* @cmp: function
* Return: index or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
