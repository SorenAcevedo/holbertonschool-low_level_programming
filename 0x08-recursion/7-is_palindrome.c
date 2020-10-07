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
* is_palindrome - string is palindrome or no
* @s: string
* Return: if is palindrome or not
*/

int is_palindrome(char *s)
{
	int l;
	char c;

	l = _strlen_recursion(s);

	c = s[l - 1];
	
	if (l < 2)
		return (1);
	else if (c != *s)
		return (0);
	else if (c == *s)
		return (1);
	else
		return (is_palindrome(s + 1));
}
