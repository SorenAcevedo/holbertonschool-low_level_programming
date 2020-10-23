#include <stdarg.h>

/**
* sum_them_all - sum all parameter
* @n: number of parameters
* Return: 0 if n 0, else sum
*/

int sum_them_all(const unsigned int n, ...)
{
	/*Crear un tipo va_list que va a tener el número de para*/
	if (n != 0)
	{
		va_list argumentos;
		unsigned int i;
		int sum = 0;

		va_start(argumentos, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(argumentos, int);
		}
		return (sum);
		/* Limpiar memoria */
		va_end(argumentos);
	}
	return (0);
}
