#include <stdio.h>

/**
* op_add - sum 2 numbers
* @a: number 1
* @b: number 2
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - sum 2 numbers
* @a: number 1
* @b: number 2
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - sum 2 numbers
* @a: number 1
* @b: number 2
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - sum 2 numbers
* @a: number 1
* @b: number 2
*/
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	return (100);
}
/**
* op_add - sum 2 numbers
* @a: number 1
* @b: number 2
*/
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	return (100);
}
