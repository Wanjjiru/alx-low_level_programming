#include "function_pointers.h"
/**
 * array_iterator  - Function iterates an array
 * @size: size of array
 * @action: pointer to array
 * @array: array to iterated
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action == NULL || array == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(*array);
		array++;
	}
}
