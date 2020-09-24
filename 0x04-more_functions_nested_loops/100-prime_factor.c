#include <stdio.h>
/**
* main - prime factors
*
* Return: 0.
*/
int main(void)
{
	int i, max_prime = 0;
	long n;

	n = 612852475143;
	for (i = 2; n >= 1; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
		if (i > max_prime)
			max_prime = i;
	}
	printf("%d", max_prime);
	return (0);
}
