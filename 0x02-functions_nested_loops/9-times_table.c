#include "main.h"
/**
 * times_table - function prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int row, column, x, y, z;


	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
	x = row * column;
	y = x / 10;
	z = x % 10;
	if (column == 0)
	{
	_putchar('0');
	}
	else if (x < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(z + '0');
	}
	else
	{


		_putchar(',');
		_putchar(' ');
		_putchar(y + '0');
		_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
