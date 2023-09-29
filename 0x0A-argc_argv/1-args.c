#include <stdio.h>
#include "main.h"

/**
 * main - shows total num of arguments passed to program
 * @argc: arguments number
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
