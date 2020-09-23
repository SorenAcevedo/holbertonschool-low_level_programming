#include <stdio.h>

/**
* main - Fibonnacci 50
* Return: 0
*/

int main(void)
{
	int i;
	unsigned long j = 0, k = 1, suma = 0, a, b, c, d, first_digits, last_4;

	for (i = 0; i < 91; i++) /* Tipo "lu" abarca hasta el valor 92 en fibo*/
	{
		suma = j + k;
		j = k;
		k = suma;

		printf("%ld", suma);
		printf(", ");
	}
	a = j / 10000; /* Número 91 en fibonacci sin últimos 4 digitos*/
	b = j % 10000; /* Últimos 4 digitos de fibonacci */
	c = suma / 10000; /* Número 92 en fibonacci sin últimos 4 digito */
	d = suma % 10000; /* Últimos 4 digitos de número 92 fibonacci */

	for (i = 0; i < 8; i++)
	{
		last_4 = (b + d) % 10000;

		if (last_4 > 9999)
			first_digits = a + c + 1;
		else
			first_digits = a + c;

		a = c;
		b = d;
		c = first_digits;
		d = last_4;

		printf("%lu%lu", first_digits, last_4);
		if (i != 7)
			printf(", ");
	}
	printf("\n");
	return (0);
}
