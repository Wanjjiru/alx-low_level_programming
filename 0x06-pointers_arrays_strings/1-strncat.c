#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: first parameter for the function
 * @src: second parameter for the function
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[i] = '\0';
	return (dest);
}
