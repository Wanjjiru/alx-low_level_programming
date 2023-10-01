#include "main.h"

/**
 * char *_strcpy - Function for copying a string
 * @dest: parameter to copy to
 * @src: parameter to coy fromp
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int m = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}
	for ( ; m < j ; m++)
	{
		dest[m] = src[m];
	}
	dest[j] = '\0';
	return (dest);
}
