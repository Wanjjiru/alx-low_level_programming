#include "function_pointers.h"
/**
 * int_index - finds integer in an array
 * @array: array to be checked
 * @cmp: pointer toa function
 * @size: number of elements
 * Return: (-1) if no element matches, if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
