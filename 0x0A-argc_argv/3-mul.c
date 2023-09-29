#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts str to int
 * @s: str to convet
 * Return:  int generated
 */
int _atoi(char *s)
{
	int i, j, k, len, x, d;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	x = 0;
	d = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && x == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			d = s[i] - '0';
			if (j % 2)
				d = -d;
			k = k * 10 + d;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}

	if (x == 0)
		return (0);

	return (k);
}

/**
 * main - multiplicationnof 2 no.
 * @argc: arguments no.
 * @argv: arguments in array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}
