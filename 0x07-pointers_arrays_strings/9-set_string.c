#include "holberton.h"
#include <stdio.h>
/**
* set_string - print_diagsums
* @s: pointer to pointer
* @to: pointer to string
* This is to pass the value of the variable in the pointer *to
* called s0, to the value s1 in the pointer **s 
*/

void set_string(char **s, char *to)
{
	*s = to;
}
