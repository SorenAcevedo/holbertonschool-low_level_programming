#include "holberton.h"
/**
* get_endianness - know if is little or big endian
* Return: 1 little or 0 big
*/

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);

}
