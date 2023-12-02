#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints everything
 * @format: lists every argument passed
 */
void print_all(const char * const format, ...)
{
	int y = 0;
	char *str, *seperator = "";


	va_list l;

	va_start(l, format);


	if (format)
	{
		while (format[y])
		{
		switch (format[y])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", seperator, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(l, double));
					break;
				case 's':
					str = va_arg(l, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seperator, str);
					break;
				default:
					y++;
					continue;
			}
			seperator = ", ";
			y++;
			}
	}


printf("\n");

va_end(l);
}
