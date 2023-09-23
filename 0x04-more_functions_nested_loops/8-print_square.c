#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */
void print_square(int size)
	{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, p;

		for (i = 0; i < size; i++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
