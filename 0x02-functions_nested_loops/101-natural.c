#include <stdio.h>

/**
* main - add multi
* Return: 0
*/

int main(void)
{
	int i, suma = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			suma += i;
	}
	printf("%d\n", suma);
	return (0);
}
