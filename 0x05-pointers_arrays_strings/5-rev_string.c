#include "holberton.h"
/**
* rev_string - reverse str
*
* @s: string
*/
void rev_string(char *s)
{
	int i, l, c;
	char r;

	i = 0;
	c = 0;

	while (s[i] != '\0')
		i++;

	for (l = i - 1; l > (i / 2); l--)
	{
		r = s[c];
		s[c] = s[l];
		s[l] = r;
		c++;
	}
}
