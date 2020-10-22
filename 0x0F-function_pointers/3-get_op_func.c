#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* get_op_func - select op and do this funct
* @s: arg operator
* Return: result of the operation or error
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (i <= 4)
	{
		if (*s == *ops[i].op && s[1] == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	printf("Error\n");
	exit(99);
}
