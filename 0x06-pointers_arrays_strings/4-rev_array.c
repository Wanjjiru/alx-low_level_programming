#include "main.h"
/**
 * reverse_array - function reverses array of integers
 * @a: Is an array
 * @n: represents elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int y;
	int x;

	for (y = 0; y < n--; y++)
	{
		x = a[y];
		a[y] = a[n];
		a[n] = x;
	}
}
