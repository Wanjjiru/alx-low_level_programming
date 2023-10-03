#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strs
 * @s1: input
 * @s2: input
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = x = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[x] != '\0')
		x++;
	str = malloc(sizeof(char) * (i + x + 1));

	if (str == NULL)
		return (NULL);
	i = x = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	while (s2[x] != '\0')
	{
		str[i] = s2[x];
		i++, x++;
	}
	str[i] = '\0';
	return (str);
}
