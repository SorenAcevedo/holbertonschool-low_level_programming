#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - conditional
*
* Return: 0
*/
int main(void)
{
	int n;
  	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n%10
	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", l, n);
	if (l == 0)
		printf("Last digit of %d is %d and is greater than 5\n", l, n);
	if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is 0\n", l, n);
	return (0);
}
