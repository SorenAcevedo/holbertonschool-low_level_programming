#include <stdio.h>
/**
* main - while oricedure
*
* Return: 0
*/
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
