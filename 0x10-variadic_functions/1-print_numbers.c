#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - print nums separted by any separator
* @separator: separator
* @n: number of parameters
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*Crear un tipo va_list que va a tener el número de para*/
	va_list argumentos;
	unsigned int i;
	int number;

	va_start(argumentos, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(argumentos, int);
		printf("%d", number);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar(10);
	/* Limpiar memoria */
	va_end(argumentos);
}

