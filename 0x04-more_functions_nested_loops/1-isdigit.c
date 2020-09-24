#include "holberton.h"
/**
* _isdigit - if a char is upper
* @c: a integer that represents char in ascii
*
* Return: 1 if is a digit, 0 if not.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
