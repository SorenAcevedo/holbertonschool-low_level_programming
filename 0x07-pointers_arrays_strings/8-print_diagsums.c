#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - print_diagsums
* @a: pointer to arrows
* @size: size of matrix
*/

void print_diagsums(int *a, int size)
{
	int i, c = 0, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i + (size * c)];
		sum2 = sum2 + (a[i + ((size) * (size - 1 - i))]);
		c++;
	}
	printf("%d, %d\n", sum, sum2);
}
