#include "main.h"
#include <stdio.h>
/**
 * rot13 - Function encoder rot13
 * @s: Is a pointer
 * Return: *s
 */

char *rot13(char *s)
{
	int m;
	int n;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[m] == data1[n])
			{
				s[m] = datarot[n];
				break;
			}
		}
	}
	return (s);
}