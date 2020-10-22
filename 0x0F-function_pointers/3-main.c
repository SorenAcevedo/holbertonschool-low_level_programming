#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - return an operation
* @argc: number of arg
* @argv: args
* Return: 0
*/

int main(int argc, char *argv[])
{
	int a, b;
	int func;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);

		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}

		func = get_op_func(argv[2])(a, b);
		printf("%d\n", func);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
