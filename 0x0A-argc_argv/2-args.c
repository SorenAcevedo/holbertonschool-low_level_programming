#include <stdio.h>

/**
* main - first parameter
* @argc: num of parameters
* @argv: str with str parameteres (like a doble pointer)
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
