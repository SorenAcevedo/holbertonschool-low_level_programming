#include <stdio.h>
/**
* print_times_table - print table n
* @n: integer
*
* Return: void
*/

void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if (n > 0 && n < 16)
	{
		for (i = 0; i < (n + 1); i++)
		{
			for (j = 0; j < (n + 1); j++)
			{
				k = i * j;

				if (j * n > 99)
				{
					if (j == 0)
						printf("0, ");
					if (k < 10)
						printf("  %d", k);
					else if (k < 100)
						printf(" %d", k);
					else
						printf("%d", k);
					if (j != n)
						printf(", ");
				}
				else
				{
					if (j == 0)
						printf("0, ");
					if (k < 10)
						printf(" %d", k);
					else
						printf("%d", k);
					if (j != n)
						printf(", ");
				}
			}
			printf("\n");
		}
	}
}
