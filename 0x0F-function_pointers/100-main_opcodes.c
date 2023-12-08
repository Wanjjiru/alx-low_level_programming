#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints its opcodes
 * @argc: no. of arguments
 * @argv: arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *array;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}


	bytes = atoi(argv[1]);


	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}


<<<<<<< HEAD
	array= (char *)main;
=======
	array = (char *)main;
>>>>>>> be03b65de938bf0723effacd654f975cc36a6c9f


	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
	{
			printf("%02hhx\n", array[x]);
			break;
		}
		printf("%02hhx ", array[x]);
	}
	return (0);
}
