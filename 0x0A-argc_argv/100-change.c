#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints smallest no. of coins for
 *  change to amt of money
 * @argc: no. of arguments
 * @argv: arguments array
 * Return: 0 (on success), 1 (if error)
 */
int main(int argc, char *argv[])
{
	int y, x, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);
	result = 0;

	if (y < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && y >= 0; x++)
	{
		while (y >= coins[x])
		{
			result++;
			y -= coins[x];
		}
	}

	printf("%d\n", result);
	return (0);
}
