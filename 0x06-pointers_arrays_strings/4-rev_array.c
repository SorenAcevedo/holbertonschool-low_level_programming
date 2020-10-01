#include "holberton.h"
/**
* reverse_array - reverse
* @a: array
* @n: elements of the array
*/

void reverse_array(int *a, int n)
{
	int l, c, r;

	c = 0;

	for (l = n - 1; l >= (n / 2); l--)
	{
		r = a[c];
		a[c] = a[l];
		a[l] = r;
		c++;
	}
}
