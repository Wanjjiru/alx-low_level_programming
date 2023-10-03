#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array areay of char
 * @size: array size
 * @c: char to be assigned
 * Return: ptr to array and  NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}
