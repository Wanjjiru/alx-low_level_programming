#include "main.h"
int is_prime_number(int n);
/**
 * actual_prime - Checks if integer is prime number.
 * @n: The int to check
 * @x: divisor to test.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */6-is_prime_number.c
unsigned int actual_prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}
