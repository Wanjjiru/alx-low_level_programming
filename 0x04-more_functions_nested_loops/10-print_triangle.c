#include "main.h"
/**
 * print_triangle - Print triangle
 * @size: The size of triangle
 */
void print_triangle(int size)
	{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, p;

		for (i = 1; i <= size; i++)
		{
			for (p = i; p < size; p++)
			{
				_putchar(' ');
			}

			for (p = 1; p <= i; p++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
