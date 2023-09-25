#include <stdio.h>

/**
 * main- prints combinations of single digit units
 * Return: Always 0.
 */

	int main(void)
{
		int l;

	for (l = 0; l <= 9; l++)
	{
		putchar((l % 10) + '0');
		if (l == 9)
			continue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n');
	return (0);
}
