#include <stdio.h>

/**
 * main -prints combination of 2 digits
 * in ascending order with comma and space to separate
 * Return: Always 0.
 */

int main(void)
{
	int p, w;

	for (p = 0; p < 9; p++)
	{
		for (w = p + 1; w < 10; w++)
		{
			putchar((p % 10) + '0');
			putchar((w % 10) + '0');

			if (p == 8 && w == 9)
			continue;


			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
