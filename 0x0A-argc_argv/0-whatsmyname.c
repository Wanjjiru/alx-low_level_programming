#include <stdio.h>
#include "main.h"

/**
 * main - prints programs name
 * @argc: shows arguments number
 * @argv: for array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
