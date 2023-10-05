#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - use malloc to create memory
 * @b: bytes allocated
 * Return: ptr to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
