#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function makes int array
 * @min: smallest value
 * @max: highest range of values and elements
 * Return: ptr to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	ptr = malloc(sizeof(int) * s);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
