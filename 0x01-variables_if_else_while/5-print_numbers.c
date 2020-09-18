#include <stdio.h>
/**
* main - while oricedure
*
* Return: 0
*/
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
