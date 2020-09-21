#include <stdio.h>
/**
* _abs - Absolute value
*
* @c: integer with sign
*
* Return: Absolute value
*/
int _abs(int c)
{
	int i;

	if (c < 0)
	{
		i = c * -1;
		return (i);
	}
	else
		return (c);
}
