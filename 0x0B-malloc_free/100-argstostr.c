#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function concatenates my arguements
 * @ac: integer
 * @av: double ptr array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		p[k] = av[i][j];
		k++;
	}
	if (p[k] == '\0')
	{
		p[k++] = '\n';
	}
	}
	return (p);
}
