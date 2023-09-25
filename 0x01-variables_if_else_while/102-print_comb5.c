#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit
 * Return: Always 0.
 */

int main(void)

{
	int x, p;

	for (x = 0; x <= 98; x++)
	{
		for (p = x + 1; p <= 99; p++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');

			if (x == 98 && p == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
