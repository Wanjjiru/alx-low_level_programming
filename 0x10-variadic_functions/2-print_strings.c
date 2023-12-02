#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_strings - Prints str and a new line.
 * @separator: String to print btwn strings.
 * @n: No. of strings passed.
 * @...: Variable no. of str to print.
 *
 * Description: Incase separator == NULL, Its not printed.
 *              Incaes one of the strings == NULL, print (nil).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int e;


	va_start(string, n);


	for (e = 0; e < n; e++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if (e != (n - 1) && separator != NULL)
			printf("%s", separator);
	}


	printf("\n");


	va_end(string);
}
