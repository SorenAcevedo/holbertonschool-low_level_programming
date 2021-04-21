#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>


/**
 * jump_search - Jump search algorithm
 * @array: array of integers.
 * @size: lenght of array.
 * @value: value to search.
 * Return: value or none.
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int jump, i, j;

	jump = sqrt(size);
	i = 0;

	if (array)
	{
		while ((array[i] <= value) && (i <= size))
		{
			printf("Value checked array[%d] = [%d]\n", i, i);
			if (array[i] == value)
				break;
			i += jump;
		}
		printf("Value found between indexes [%d] and [%d]\n", i - 3, i);
		i -= jump;
		for (j = 0; j < jump && i < size; j++, i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, i);
			if (array[i] == value)
				return (i);
		}
	}

	return (-1);
}
