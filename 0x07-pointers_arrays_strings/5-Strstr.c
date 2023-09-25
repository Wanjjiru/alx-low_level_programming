#include "main.h"
/**
 * _strstr - function locares a substring
 * @haystack: string where substring is stored
 * @needle: substring to search
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
