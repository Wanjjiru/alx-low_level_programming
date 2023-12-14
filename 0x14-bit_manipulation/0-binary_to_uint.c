#include "main.h"
/**
 * binary_to_uint - Function converts binary to unsigned int
 * @b: pointer to string
 * Return: 0 if string has more than 1 char,
 * or 1 if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t x = 0;
	size_t z = 0;
	size_t sum = 0;
	size_t pow = 1;
	int bse = 2;


	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
		;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		for (z = len - 1; z > 0; z--)
		pow = pow * bse;
		sum = sum + (pow * (b[x] - 48));
		len--;
		pow = 1;
	}
	return (sum);
}
