#include "main.h"
/**
 * _strpbrk - function searches string
 * @s: parameter
 * @accept: parameter
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
		if (*s == accept[y])
		return (s);
		}
	s++;
	}
	return ('\0');
}
