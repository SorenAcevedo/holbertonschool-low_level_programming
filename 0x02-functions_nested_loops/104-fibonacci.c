#include <stdio.h>

/**
* main - Fibonnacci 50
* Return: 0
*/

int main(void)
{
	int i;
	unsigned long j = 0, k = 1, suma = 0, a, b, c, d, first_digits, last_3;

	for (i = 0; i < 91; i++) /* Tipo "lu" abarca hasta el valor 92 en fibo*/
	{
		suma = j + k;
		j = k;
		k = suma;

		printf("%ld", suma);
		printf(", ");
	}
	a = j / 1000; /* Número 91 en fibonacci sin últimos 3 digito*/
	b = j % 1000; /* Últimos 3 digitos de fibonacci */
	c = suma / 1000; /* Número 92 en fibonacci sin últimos 3 digito */
	d = suma % 1000; /* Últimos 3 digitos de número 92 fibonacci */

	for (i = 0; i < 7; i++)
	{
		last_3 = (b + d) % 1000;

		if (last_3 > 999)
			first_digits = a + c + 1;
		else
			first_digits = a + c;

		a = c;
		b = d;
		c = first_digits;
		d = last_3;

		printf("%lu%lu", first_digits, last_3);
		if (i != 7)
			printf(", ");
	}
	printf("\n");
	return (0);
}
