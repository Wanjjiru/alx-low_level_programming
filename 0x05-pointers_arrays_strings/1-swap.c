#include "main.h"
/**
 * swap_int - Function for swapping
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
