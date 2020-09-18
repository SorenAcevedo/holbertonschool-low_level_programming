#include <stdio.h>
/**
* main - Don't repeat
*
* Return: 0
*/
int main(void)
{
	int num;
	int num_2;

	for (num = 48; num < 57; num++)
	{
		for (num_2 = 48; num_2 < 58; num_2++)
		{
			if (num >= num_2)
				continue;
			else
			{
				putchar(num);
				putchar(num_2);

				if (num == 56 && num_2 == 57)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
