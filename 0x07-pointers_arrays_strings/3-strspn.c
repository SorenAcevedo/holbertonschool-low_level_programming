#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring
* @s: str
* @accept: char
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, con = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; s[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				con++;
				break;
			}
		}
		if (accept[j] != s[i])
			break;
	}
	return (con);
}
