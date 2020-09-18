#include <stdio.h>
/**
* main - while oricedure
*
* Return: 0
*/
int main(void)
{
	int letra = 97;

	while (letra < 123)
	{
		putchar(letra);
		letra = letra + 1;
	}

	letra = 65;

	while (letra < 91)
	{
		putchar(letra);
		letra = letra + 1;
	}
	putchar('\n');
	return (0);
}
