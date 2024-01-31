#include "main.h"
/**
 * _puts - The fuction prints a string and a new line
 * @str: The fuction parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

