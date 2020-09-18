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
	int num_3;

	for (num = 48; num < 56; num++)
	{
		for (num_2 = 48; num_2 < 57; num_2++)
		{
			for (num_3 = 48; num_3 < 58; num_3++)
			{
				if (num >= num_2 || num_2 >= num_3)
					continue;
				else
				{
					putchar(num);
					putchar(num_2);
					putchar(num_3);

					if (num == 55 && num_2 == 56 && num_3 == 57)
						continue;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
