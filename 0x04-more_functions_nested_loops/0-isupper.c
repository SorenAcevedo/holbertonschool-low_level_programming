#include "holberton.h"
/**
* _isupper - if a char is upper
* @c: a integer that represents char in ascii
*
* Return: 1 if is upper, 0 if not.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
