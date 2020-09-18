#include <stdio.h>
/**
* main - while oricedure
*
* Return: 0
*/
int main(void)
{
	int letra = 122;

	while (letra > 96)
	{
		putchar(letra);
		letra = letra - 1;
	}
	putchar('\n');
	return (0);
}
