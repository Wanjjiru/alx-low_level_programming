#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts no. of words
 * @s: str
 * Return: word no.
 */
int count_word(char *s)
{
	int x, y, z;

	x = 0;
	z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[y] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			z++;
		}
	}

	return (z);
}
/**
 * **strtow- function splits str to words
 * @str: str
 * Return: ptr to str array or NULL (Error)
 */
char **strtow(char *str)
{
	char **m, *u;
	int i, k = 0, l = 0, wad, c = 0, srt, e;

	while (*(str + l))
		l++;
	wad = count_word(str);
	if (wad == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (wad + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				u = (char *) malloc(sizeof(char) * (c + 1));
				if (u == NULL)
					return (NULL);
				while (srt < e)
					*u++ = str[srt++];
				*u = '\0';
				m[k] = u - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			srt = i;
	}

	m[k] = NULL;

	return (m);
}
