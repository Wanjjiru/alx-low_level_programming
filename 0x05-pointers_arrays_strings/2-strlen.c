#include "main.h"
/**
 * _strlen - function for length of string
 * @s: Is the string
 * Return: string length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
