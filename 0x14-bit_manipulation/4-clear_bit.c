#include "main.h"
/**
 * clear_bit - Set value of bit to 0
 * @index: The position of bit to be changed
 * @n: bit to be changed
 * Return: 1 if successful, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pnt;

	pnt = 1;
	pnt = pnt << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if ((*n >> index & 1) == 1)
		*n = pnt ^ *n;
	return (1);
}
