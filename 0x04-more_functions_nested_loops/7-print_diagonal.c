#include "main.h"

/**
 * print_diagonal - function draws diagonal line on terminal
 * @n: fubction parameter
 */

void print_diagonal(int n)
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, p;

		for (i = 0; i < n; i++)
		{
			for (p = 0; p < n; p++)
			{
				if (p == i)
					_putchar('\\');
				else if (p < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
