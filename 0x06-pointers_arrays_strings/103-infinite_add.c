#include "main.h"

/**
 * rev_string - function for reversing a string
 * @n: function parameter
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int y = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (y = 0; y < i; y++, i--)
	{
		temp = *(n + y);
		*(n + y) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - functin adds two numbers
 * @n1: parameter for first number
 * @n2: parameter for second number
 * @r: points the buffer
 * @size_r: size of buffer
 * Return: pointer calls a function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, y = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + y) != '\0')
		y++;
	i--;
	y--;
	if (y >= size_r || i >= size_r)
		return (0);
	while (y >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (y < 0)
			val2 = 0;
		else
			val2 = *(n2 + y) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		y--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
