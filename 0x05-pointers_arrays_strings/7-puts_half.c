#include "main.h"
/**
 * puts_half - function that display half a string
 * if odd len, c = (length_of_the_string - 1) / 2
 * @str: parameter
 * Return: part of input
 */
void puts_half(char *str)
{
	int a, c, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	c = (longi / 2);

	if ((longi % 2) == 1)
		c = ((longi + 1) / 2);

	for (a = c; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
