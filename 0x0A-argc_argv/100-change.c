#include <stdio.h>
#include <stdlib.h>

/**
* main - first parameter
* @argc: num of parameters
* @argv: str with str parameteres (like a doble pointer)
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int i, canti = 0;

	if (argc != 2)
		printf("Error\n");
	else
	{
		i = atoi(argv[1]);

		while (i > 0)
		{
			canti++;

			if (i >= 25)
				i -= 25;
			else if (i >= 10)
				i -= 10;
			else if (i >= 5)
				i -= 5;
			else if (i >= 2)
				i -= 2;
			else
				i -= 1;
		}
		printf("%d\n", canti);
	}
	return (0);
}
