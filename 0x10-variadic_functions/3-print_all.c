#include <stdarg.h>
#include <stdio.h>
/**
* print_all - print str's separted by any separator
* @format: number of parameters
*/

void print_all(const char * const format, ...)
{
	va_list argumentos;
	int j = 0, len = 0;
	char *s;

	va_start(argumentos, format);

	while (format[j] != 0)
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(argumentos, int));
				len = 1;
				break;
			case 'i':
				printf("%i", va_arg(argumentos, int));
				len = 1;
				break;
			case 's':
				s = va_arg(argumentos, char*);
				if (s == NULL)
					s = "nil";
				printf("%s", s);
				len = 1;
				break;
			case 'f':
				printf("%f", va_arg(argumentos, double));
				len = 1;
				break;
			default:
				len = 0;
				break;
		}
		if (format[j + 1] && len == 1)
			printf(", ");
		j++;
	}
	putchar(10);
	va_end(argumentos);
}
