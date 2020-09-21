#include <stdio.h>
/**
* _isalpha - see if the char is alpha.
*
* @c: Is an integer
*
* Return: 0 if c is not a lower case, and 1 if c is a upper case.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
