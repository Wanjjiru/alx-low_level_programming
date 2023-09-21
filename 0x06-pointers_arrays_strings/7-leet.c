#include "main.h"
/**
 * leet - function to encode in 1337speak
 * @n: function parameter
 * Return: n
 */
char *leet(char *n)
{
	int x, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (p = 0; p < 10; p++)
		{
			if (n[x] == s1[p])
			{
				n[x] = s2[p];
			}
		}
	}
	return (n);
}
