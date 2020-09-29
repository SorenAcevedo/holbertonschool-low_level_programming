#include "holberton.h"
/**
* swap_int - swap 2 integers
* @a : 1 int
* @b : 1 int
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
