#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - Outputs numbers & a new line.
 * @separator: The str to output.
 * @n: Total ints passed.
 * @...: Variable no. of no. to output.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
	{
		va_list s;
		unsigned int i;


		va_start(s, n);


		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(s, int));


			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(s);
	}
