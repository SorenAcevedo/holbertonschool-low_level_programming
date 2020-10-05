#include "holberton.h"

/**
* _strchr - locates a character in a string
* @s: str
* @c: char
* Return: a pointer the first occurrence of the character c in the string s,
* or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int l = 0, i;
	char *p;

	p = '\0';

	while (s[l] != 0)
		l++;
	for (i = 0; i <= l; i++)
	{
		if (s[i] == c)
		{
			p = &(s[i]);
			break;
		}
	}
	return (p);
}
