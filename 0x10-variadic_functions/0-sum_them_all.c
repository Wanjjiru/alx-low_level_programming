#include "variadic_functions.h"
#include <stdarg.h>


	/**
	 * sum_them_all - Gives result of sum of parameters.
	 * @n: The no. of parameters.
	 * @...: No of parameters to be calculated
	 * Return: if n == 0 (-0), else sum of parameters
	 *
	 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list a;
		unsigned int x, sum = 0;


		va_start(a, n);


		for (x = 0; x < n; x++)
			sum += va_arg(a, int);


		va_end(a);


		return (sum);
	}
