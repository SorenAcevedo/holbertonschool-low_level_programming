#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @array: array of integers.
 * @size: lenght of array.
 * @value: value to search.
 * Return: value or none.
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int l, r, m, i;
	char *sep;

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		sep = "";
		printf("Searching in array:");
		for (i = l; i <= r; i++)
		{
			printf("%s %d", sep, array[i]);
			sep = ",";
		}
		putchar(10);

		m = (r + l) / 2;
		if (value == array[m])
			return (m);

		else if (value < array[m])
			r = m - 1;

		else
			l = m + 1;
	}
	return (-1);
}
