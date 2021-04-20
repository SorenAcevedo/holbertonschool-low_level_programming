#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints using the Linear sa
 * @array: array of integers.
 * @size: lenght of array.
 * @value: value to search.
 * Return: value or none.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	return (-1);
}
