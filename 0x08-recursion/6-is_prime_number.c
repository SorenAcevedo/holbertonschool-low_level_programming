#include "holberton.h"

/**
* prime - number is prime?
* @n: num
* @i: iterator
* Return: if n % i  = 0 && i < n return 0, else return 1
*/

int prime(int n, int i)
{
	if ((n % i == 0 && i < n) || n < 2)
		return (0);
	else if (n % i == 0 && i == n)
		return (1);
	else
		return (prime(n, i + 1));
}

/**
* is_prime_number - prime number
* @n: num
* Return: if is prime or not
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
}
