#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - print str's separted by any separator
* @separator: separator
* @n: number of parameters
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	/*Crear un tipo va_list que va a tener el número de para*/
	if (n != 0)
	{
		va_list argumentos;
		unsigned int i;
		char *cadena;

		va_start(argumentos, n);

		for (i = 0; i < n; i++)
		{
			cadena = va_arg(argumentos, char*);
			if (cadena == NULL)
				cadena = "nil";
			if (separator != NULL && i != n - 1)
				printf("%s%s ", cadena, separator);
			else
				printf("%s", cadena);
		}
		putchar (10);
		/* Limpiar memoria */
		va_end(argumentos);
	}
}
