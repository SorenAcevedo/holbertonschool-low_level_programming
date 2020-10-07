#include "holberton.h"

/**
* raiz - with iterator
* @n: num
* @i: iterator
* Return: if (i*i) = n return i, else return -1
*/

int raiz(int n, int i)
{
	if ((i * i) < n)
	{
		i = raiz(n, i + 1);
	}
	else if ((i * i) > n)
		return (-1);
	return (i);
}

/**
* _sqrt_recursion - num pow
* @n: num
* Return: sqr num
*/

int _sqrt_recursion(int n)
{
	return (raiz(n, 1));
}
