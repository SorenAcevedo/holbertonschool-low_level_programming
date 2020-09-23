#include <stdio.h>

/**
* main - Fibonnacci 50
* Return: 0
*/

int main(void)
{
	int i;
	long j = 0, k = 1, suma = 0;

	for (i = 0; i < 50; i++)
	{
		suma = j + k;
		j = k;
		k = suma;

		printf("%d", suma);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
