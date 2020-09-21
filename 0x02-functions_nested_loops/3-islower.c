#include <stdio.h>
/**
* _islower - see if the char is lowecase.
*
* @c: Is an integer
*
* Return: 0 if c is not a lower case, and 1 if c is a upper case.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
