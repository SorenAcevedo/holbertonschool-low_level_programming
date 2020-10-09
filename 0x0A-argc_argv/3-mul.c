#include <stdio.h>

/**
* str_to_int - pass string to int
* @s: str
* Return: int
*/

int str_to_int(char *s)
{
	int k = 0, entero = 0;

	if (s[0] == '-')
		k = 1;
	for (; s[k] != 0; k++)
	{
		entero = entero * 10 + (s[k] - 48);
	}
	if (s[0] == '-')
		entero *= -1;
	return (entero);
}

/**
* main - first parameter
* @argc: num of parameters
* @argv: str with str parameteres (like a doble pointer)
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] > 47 && *argv[i] < 58) || *argv[i] == '-')
				j *= str_to_int(argv[i]);
		}
		printf("%d\n", j);
	}
	else
		printf("Error\n");
	return (0);
}
