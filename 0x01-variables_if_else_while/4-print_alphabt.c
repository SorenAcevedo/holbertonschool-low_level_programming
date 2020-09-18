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
		if (letra  == q || letra == e)
			letra = letra + 1;
		else
		{
			putchar(letra);
			letra = letra + 1;
		}
	}
	putchar('\n');
	return (0);
}
