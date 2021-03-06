#include <stdarg.h>
#include <stdio.h>
/**
* print_all - print str's separted by any separator
* @format: number of parameters
*/

void print_all(const char * const format, ...)
{
	va_list argumentos;
	int j = 0, i;
	char *s;

	while (format)
	{
		va_start(argumentos, format);
		while (format[j])
		{
			i = 1;
			switch (format[j])
			{
				case 'c':
					printf("%c", va_arg(argumentos, int));
					break;
				case 'i':
					printf("%d", va_arg(argumentos, int));
					break;
				case 's':
					s = va_arg(argumentos, char*);
					if (s == NULL)
						s = "(nil)";
					printf("%s", s);
					break;
				case 'f':
					printf("%f", va_arg(argumentos, double));
					break;
				default:
					i = 0;
					break;
			}
			if (format[j + 1] && i)
				printf(", ");
			j++;
		}
		va_end(argumentos);
		break;
	}
	putchar(10);
}
