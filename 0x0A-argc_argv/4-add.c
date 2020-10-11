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
	int i, j = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] > 47 && *argv[i] < 58) || *argv[i] == '-')
				j += atoi(argv[i]);
			else
				break;
		}
		if (i == argc)
		{
			printf("%d\n", j);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
