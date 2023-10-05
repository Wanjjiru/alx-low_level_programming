#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates2 str
 * @s1: string 1
 * @s2: string 2
 * @n: bytes from s2 to be concatenated to s1
 * Return: ptr to the str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int p = 0, w = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (p < len1)
	{
		s[p] = s1[p];
		p++;
	}

	while (n < len2 && p < (len1 + n))
		s[p++] = s2[w++];

	while (n >= len2 && p < (len1 + len2))
		s[p++] = s2[w++];

	s[p] = '\0';

	return (s);
}
