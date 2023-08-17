#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int p = 0;
	char *s, *sep = "";

	va_list l;

	va_start(l, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", sep, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(l, double));
					break;
				case 's':
					s = va_arg(l, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				default:
					p++;
					continue;
			}
			sep = ", ";
			p++;
		}
	}

	printf("\n");
	va_end(l);
}
