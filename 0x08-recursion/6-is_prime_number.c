#include "main.h"

/**
 * is_prime_number - Determines if an integer is a prime number.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n);

/**
 * actual_prime - Checks if an integer is prime recursively.
 * @n: The integer to be checked.
 * @i: The iterator.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int actual_prime(int n, int i);

/**
 * is_prime_number - Determines if an integer is a prime number.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Checks if an integer is prime recursively.
 * @n: The integer to be checked.
 * @i: The iterator.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
