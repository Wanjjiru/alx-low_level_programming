#include "main.h"
/**
 * _strncpy - function to copy a string
 * @dest: First parameter
 * @src: The second parameter
 * @n: Is a parametet
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}

	return (dest);
}
