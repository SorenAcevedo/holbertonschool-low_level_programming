#include <stdarg.h>
#include <stdio.h>
#define CR format[j]
/**
* print_all - print str's separted by any separator
* @format: number of parameters
*/

void print_all(const char * const format, ...)
{
	va_list argumentos;
	int j = 0, i;
	char c, *s;

	va_start(argumentos, format);

	while (format[j] != 0)
	{
		switch (format[j])
		{
			case 'c':
			{
				c = va_arg(argumentos, int);
				printf("%c", c);
				break;
			}
			case 'i':
			{
				i = va_arg(argumentos, int);
				printf("%i", i);
				break;
			}
			case 's':
			{
				s = va_arg(argumentos, char*);
				if (s == NULL)
					s = "nil";
				printf("%s", s);
				break;
			}
			default:
				break;
		}
		if (format[j + 1] != 0 && (CR == 99 || CR == 's' || CR == 'i'))
			printf(", ");
		j++;
	}
	putchar(10);
	va_end(argumentos);
}
