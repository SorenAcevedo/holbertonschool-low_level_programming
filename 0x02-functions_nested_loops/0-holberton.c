#include <stdio.h>
/**
* main - using functions.
*
* Return: Always 0.
*/
int _putchar(char c);

int main(void)
{
	char a[] = "Holberton";
	int i;

	for (i = 0 ; i < 9; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
