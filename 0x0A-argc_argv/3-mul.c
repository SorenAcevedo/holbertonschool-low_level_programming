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
	int i, j = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] > 47 && *argv[i] < 58) || *argv[i] == '-')
				j *= atoi(argv[i]);
		}
		printf("%d\n", j);
		return (0);
	}
	else
		printf("Error\n");
		return (1);
}
