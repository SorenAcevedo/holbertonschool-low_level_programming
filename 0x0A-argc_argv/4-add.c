#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* all_digits - vrify if all are digits
* @s: string
* Return: 0 if all digits, 1 if no
*/

int all_digits(char *s)
{
	int k = 0, l;

	l = strlen(s);

	if (s[0] == '-' || l > 1)
		k = 1;
	for (; k < l; k++)
	{
		if (s[k] < 48 || s[k] > 57)
			return (1);
	}
	return (0);
}

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
			if (all_digits(argv[i]) == 0)
				j += atoi(argv[i]);
			else
				break;
		}
		if (i == argc)
		{
			printf("%d\n", j);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
		printf("0\n");
	return (0);
}
