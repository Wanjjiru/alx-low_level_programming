#include "main.h"
/**
 * _sqrt_recursion - square root function
 * @n: number
 * Return: square root
 */
int actual_sqrt_recursion(int n, int x);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - square roots natural number
 * @n: number to get sqrt of
 * @x: iterator
 * Return: the result of sqrt
 */
int actual_sqrt_recursion(int n, int x)
{
	if (x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
