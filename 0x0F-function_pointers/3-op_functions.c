#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 * Return: sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sutracts two numbers
 * @a: first number
 * @b: second number
 * Return: substraction of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: divison of the two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gives modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: Remainder of the two numbers divided
 */
int op_mod(int a, int b)
{
	return (a % b);
}
