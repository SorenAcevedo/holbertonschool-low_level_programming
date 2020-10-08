#include "holberton.h"
/**
* _strlen_recursion - recursion, len of a string
* @s: string
* Return: len
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != 0)
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}

/**
* oposite - compare oposite position
* @s: string
* @i: iterator
* Return: 1 if is polindr or 0 if no
*/

int oposite(char *s, int i)
{
	int l;
	char c;

	l = _strlen_recursion(s);
	c = s[l - i];

	if (c != *s)
		return (0);
	else if (c == *s)
		return (1);
	else
		return (oposite(s + 1, i + 1));
}

/**
* is_palindrome - string is palindrome or no
* @s: string
* Return: if is palindrome or not
*/

int is_palindrome(char *s)
{
	return (oposite(s, 1));
}
