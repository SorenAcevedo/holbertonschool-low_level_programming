#include <stdio.h>

/**
* main - add multi
* Return: 0
*/

int main(void)
{
	int i, j, suma;

	for (i = 0; i < 1024; i += 3)
		suma = suma + i;
	for (i = 5; i < 1024; j += 5)
		suma = suma + j;
	printf("%d", suma);
	return (0);
}
