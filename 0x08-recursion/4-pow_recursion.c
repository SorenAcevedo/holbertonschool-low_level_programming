#include "holberton.h"

/**
* _pow_recursion - num pow
* @x: num
* @y: pow
* Return: num pow
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
