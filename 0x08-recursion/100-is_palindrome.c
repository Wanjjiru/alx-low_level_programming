#include "main.h"
int check_pal(char *s, int x, int length);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks for palindrome
 * @s: string to be reversed and checked
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - checks length of str
 * @s: string to check for length
 * Return: len of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks char for palindrome
 * @s: string
 * @x: iterator
 * @length: length of string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int x, int length)
{
	if (*(s + x) != *(s + length - 1))
		return (0);
	if (x >= length)
		return (1);
	return (check_pal(s, x + 1, length - 1));
}
