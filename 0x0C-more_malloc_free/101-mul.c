#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - detects non digit
 * @s: str
 * Return: 0 for non-digit , 1 otherwise
 */
int is_digit(char *s)
{
	int y = 0;

	while (s[y])
	{
		if (s[y] < '0' || s[y] > '9')
			return (0);
		y++;
	}
	return (1);
}

/**
 * _strlen - returns len
 * @s: str
 * Return: length of str
 */
int _strlen(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	return (y);
}

/**
 * errors - for errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - gets multiplication of 2 numbers
 * @argc: no. of arguments
 * @argv: arguments array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *x1, *x2;
	int len1, len2, len, i, w, g1, g2, *ans, h = 0;

	x1 = argv[1], x2 = argv[2];
	if (argc != 3 || !is_digit(x1) || !is_digit(x2))
		errors();
	len1 = _strlen(x1);
	len2 = _strlen(x2);
	len = len1 + len2 + 1;
	ans = malloc(sizeof(int) * len);
	if (!ans)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		ans[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		g1 = x1[len1] - '0';
		w = 0;
		for (len2 = _strlen(x2) - 1; len2 >= 0; len2--)
		{
			g2 = x2[len2] - '0';
			w += ans[len1 + len2 + 1] + (g1 * g2);
			ans[len1 + len2 + 1] = w % 10;
			w /= 10;
		}
		if (w > 0)
			ans[len1 + len2 + 1] += w;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (ans[i])
			h = 1;
		if (h)
			_putchar(ans[i] + '0');
	}
	if (!h)
		_putchar('0');
	_putchar('\n');
	free(ans);
	return (0);
}
