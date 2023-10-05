#include <stdlib.h>
#include "main.h"

/**
 * *_memset - constant byte to complete memory
 * @a: memory area to be filled
 * @b: char to copy
 * @c: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *a, char b, unsigned int c)
{
	unsigned int x;

	for (x = 0; x < c; x++)
	{
		a[x] = b;
	}

	return (a);
}

/**
 * *_calloc - allocates memory
 * @nmemb: elements n. in array
 * @size: element size
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
