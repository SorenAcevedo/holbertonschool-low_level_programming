#include <stdio.h>
#include "_putchar.c"
/**
* main - using functions.
*
* Return: Always 0.
*/
int main(void)
{
	char a[] = "Holberton";
	int i, j;

	for (i = 0 ; i < 9; i++)
	{
		j = _putchar(a[i]);

		if (j == 1)
			putchar(a[i]);
		else
			continue;
	}
	putchar('\n');
	return (0);
}
