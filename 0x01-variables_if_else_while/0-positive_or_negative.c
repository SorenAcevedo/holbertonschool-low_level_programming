#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* *
* main - condicionales 
*
* Return: 0 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	    printf("%d is positive", n);
	if (n == 0)
	    printf("%d is zero", n);
	if (n < 0)
	    printf("%d is negative", n);
	return (0);
}
