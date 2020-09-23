#include <stdio.h>

/**
* main - Fibonnacci 50
* Return: 0
*/

int main(void)
{
	int i;
	long j = 0, k = 1, suma = 0, par = 0;

	while (suma < 4000001)
	{
		suma = j + k;
		j = k;
		k = suma;
		if ((suma % 2) == 0)
			par += suma;
	}
	printf("%ld\n", par);
	return (0);
}
