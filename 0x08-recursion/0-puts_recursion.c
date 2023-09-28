#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function print a str
 * @s: pointerto a str
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
