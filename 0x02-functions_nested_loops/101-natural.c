#include <stdio.h>

/**
* main - add multi
* Return: 0
*/

int main(void)
{
	int i, suma;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			suma += i;
	printf("%d", suma);
	return (0);
}
