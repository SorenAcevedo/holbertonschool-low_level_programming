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
	int i;
	char *p;

	p = '\0';

	for (i = 0; s[i-1] != 0; i++)
	{
		if (s[i] == c)
		{
			p = &(s[i]);
			break;
		}
	}
	return (p);
}
