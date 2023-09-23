#include <stdio.h>
#include <math.h>

/**
 * main - finds & print largest prime factor of number 612852475143
 * Return: Always 0
 */
int main(void)
{
	long int x;
	long int max;
	long int i;

	x = 612852475143;
	max = -1;

	while (x % 2 == 0)
	{
		max = 2;
		x /= 2;
	}

	for (i = 3; i <= sqrt(x); i = i + 2)
	{
		while (x % i == 0)
		{
			max = i;
			x = x / i;
		}
	}

	if (x > 2)
		max = x;

	printf("%ld\n", max);

	return (0);
}
