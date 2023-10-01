#include "main.h"
/**
 *_memcpy - function copies memory area
 *@dest: memory destination
 *@src: memory source
 *@n: bytes number
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int j = n;

	for (; t < j; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
