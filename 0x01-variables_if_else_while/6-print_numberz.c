#include <stdio.h>
/**
* main - while oricedure
*
* Return: 0
*/
int main(void)
{
	int letra = 48;

	while (letra < 58)
	{
		putchar(letra);
		letra = letra + 1;
	}
	putchar('\n');
	return (0);
}
