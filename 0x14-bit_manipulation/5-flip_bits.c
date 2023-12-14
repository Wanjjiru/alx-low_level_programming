#include "main.h"
/**
 * flip_bits - Returns number of bits needed to flip
 * @n: Int to be flipped
 * @m: The other int to flip
 * Return: Number of biits needed to flip a no.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int outpt;
	unsigned int tally;

	outpt = n ^ m;
	for (tally = 0; outpt > 0;)
	{
		if ((outpt & 1) == 1)
			tally++;
		outpt = outpt >> 1;
	}
	return (tally);
}
