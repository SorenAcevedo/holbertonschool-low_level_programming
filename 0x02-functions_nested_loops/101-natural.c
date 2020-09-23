#include <stdio.h>
/**
* suma_multiplos - add multi
*/
void suma_multiplos(void)
{
	int i, j, n, suma, mul3, mul5;

	mul3 = 1024 / 3;
	mul5 = 1024 / 5;

	for (i = 3; i <= mul3; i += 3)
		suma = suma + i;
	for (i = 5; i <= mul5; j += 5)
		suma = suma + j;
	printf("%d", suma);
}
