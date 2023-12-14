#include "main.h"
/**
 * get_bit - Gives value of bit at an indicated index
 * @n: int to be returned
 * @index: given position
 * Return: int 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (x = 0; x < index; x++)
		n = n >> 1;
	return (n & 1);
}
