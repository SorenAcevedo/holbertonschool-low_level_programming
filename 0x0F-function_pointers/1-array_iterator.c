#include <stdio.h>

/**
* array_iterator - print elements
* @array: array
* @size: size of array
* @action: function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
