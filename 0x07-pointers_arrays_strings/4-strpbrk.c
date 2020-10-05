#include "holberton.h"

/**
* _strpbrk - locates a character in a string
* @s: str
* @accept: char
* Return: a pointer the 1 occurrence of any char c fron accept in the string s,
* or NULL if the character is not found
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, stop = 0;
	char *p;

	p = '\0';

	for (i = 0; s[i] != 0 && stop == 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				p = &(s[i]);
				stop = 1;
				break;
			}
		}
	}
	return (p);
}
