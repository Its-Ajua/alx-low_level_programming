#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *x, *string = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", string, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", string, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", string, va_arg(args, double));
					break;
				case 's':
					x = va_arg(args, char *);
					if (!x)
						x = "(nil)";
					printf("%s%s", string, x);
					break;
				default:
					i++;
					continue;
			}
			string = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
