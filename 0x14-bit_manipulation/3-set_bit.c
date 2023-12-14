#include "main.h"
/**
 * set_bit - sets value of number
 * @index: positioning
 * @n: int to be set
 * Return: 1 if successful -1 if otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setp;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	setp = 1;
	setp = setp << index;
	*n = ((*n) | setp);
	return (1);
}
